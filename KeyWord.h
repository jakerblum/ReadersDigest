/*
 *
 *  KeyWord.h
 *  j.r. blum
 *  declares the methods and member variables for the keyword class.
 *
 */

#ifndef KEYWORD_H
#define KEYWORD_H

#include <iostream>
#include <sstream>
#include <vector>

class KeyWord {
    public:
        explicit KeyWord(std::string str); // constructor using infile

        bool findSyn(std::string target); // finds a given synonym

        std::string getName();

    private:
        std::string name; // name of word
        std::vector<std::string> synonyms; // vector of its synonyms
};

#endif
