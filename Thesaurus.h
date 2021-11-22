/*
 *
 *  Thesaurus.h
 *  j.r. blum
 *  declares the methods and member variables for the thesaurus class.
 *
 */

#ifndef THESAURUS_H
#define THESAURUS_H

#include "KeyWord.h"
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>

class Thesaurus {
    public:
        Thesaurus();
        Thesaurus(std::ifstream &infile);

        void add(KeyWord addition);
        KeyWord search(std::string target);

    private:
        std::vector<KeyWord> words;
};

#endif
