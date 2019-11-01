//
// Created by tanus on 2019-10-31.
//

#include "Dictionary.hpp"
#include <iostream>

using namespace std;

/*Dictionary constructor function*/
Dictionary::Dictionary(const char *file) {
    strcpy(fileName, file);
    ifstream f;
    f.open(fileName);
    if (!f) {
        cout << "File " << fileName << " doesn't exists\n";
        exit(0);
    }

    string word, def;
    while (f >> word) {
        f >> ws;
        getline(f, def);
        dict[word] = def;
    }

    f.close();
}

/*Print contents of dictionary*/
void Dictionary::printDict() {
    map<string, string>::iterator iter;
    for (iter = dict.begin(); iter != dict.end(); iter++)
        cout << iter->first << " - " << iter->second << endl;
}


/*find word-Defination function to get a word and find its defination */
string Dictionary::findWordDefinition(string str) {

    if (dict.find(str) != dict.end()) {
        return dict[str];
    }
    else {
        return "The word doesn't exists";
    }
}


/*new word function that will prompt user to enter a word*/
void Dictionary::newWord() {
    while (true) {
        cout << "Enter a new word:\n";
        string word, defination;
        cin >> word;
        if (dict.find(word) != dict.end()) {
            cout << "The word already exists\n";
        }
        else {
            cout << "Enter its definition:\n";
            cin >> ws;
            getline(cin, defination);
            dict[word] = defination;

            ofstream f;
            f.open(fileName);
            f << word << " " << defination << endl;
            f.close();
            break;
        }
    }

}
