/*
 *
 *  Sorter.h
 *  j.r. blum
 *  declares the methods and member variables for the sorter class.
 *
 */

#ifndef SORTER_H
#define SORTER_H

#include "Thesaurus.h"
#include <iostream>
#include <fstream>
#include <vector>

class Sorter {
    public:
        Sorter(std::ifstream &infile);

        void addTarget(std::string add);
        void score(std::ifstream &infile);

        void run(std::ifstream &infile);
    private:
        std::vector<std::string> targets;
        Thesaurus reference;
};


#endif
