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
        Sorter(std::ifstream &infile); // constructor

        void addTarget(KeyWord add); // adds a target keyword to vector
        void score(std::ifstream &infile); // scores article
        void printFinalScore(int score); // prints final score and analysis

        void run(std::ifstream &infile); // runs program
    private:
        std::vector<KeyWord> targets; // vector of keywords from user input
        Thesaurus reference; // reference thesaurus from arguments
};


#endif
