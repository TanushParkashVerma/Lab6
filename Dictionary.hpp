//
// Created by tanus on 2019-10-31.
//

#ifndef LAB6_DICTIONARY_HPP
#define LAB6_DICTIONARY_HPP


#include<iostream>
#include<fstream>
#include<map>
#include<cstdlib>
#include<cstring>

using namespace std;

class Dictionary {
private:

    /*STL map to store words and defination*/
    map<string, string> dict;

    /*file name*/
    char fileName[20];

public:
    /*Dictionary constructor function*/
    Dictionary(const char *file);

    /*Print contents of dictionary*/
    void printDict();


    /*find word-Defination function to get a word and find its defination */
    string findWordDefinition(string str);


    /*new word function that will prompt user to enter a word*/
    void newWord();

};


#endif //LAB6_DICTIONARY_HPP
