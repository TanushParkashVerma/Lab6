#include <iostream>
#include "Dictionary.hpp"

int main() {
    cout << "Enter dictionary file name:\n";
    char ch[20];
    cin >> ch;
    Dictionary dictionary(ch);
    while (true) {
        cout << "Enter:\n1 - Print dictionary\n2 - Find word definition\n";
        cout << "3 - Enter new word and definition\n4 - Exit\n";

        int choice;
        cin >> choice;
        if (choice == 1) {
            dictionary.printDict();
        } else if (choice == 2) {
            cout << "Enter a word:\n";
            string word;
            cin >> word;
            cout << dictionary.findWordDefinition(word) << endl;
        } else if (choice == 3) {
            dictionary.newWord();
        } else if (choice == 4) {
            return 0;
        } else {
            cout << "Invalid choice\n";
        }
    }
}
