/*
 *
 *  Sorter.cpp
 *  j.r. blum
 *  defines the methods for the sorter class.
 *
 */

#include "Sorter.h"

/*
 *  default constructor, initializes sorter using infile to create thesaurus
 */
Sorter::Sorter(std::ifstream &infile)
{
    reference = Thesaurus(infile);
}

/*
 *  adds target to vector to look for in article
 */
void Sorter::addTarget(std::string add)
{
    targets.push_back(add);
}

/*
 *  scores the article from the given ifstream
 */
void Sorter::score(std::ifstream &infile)
{
    std::cout << "Scoring...\n";
}

/*
 *  runs the sorter
 */
void Sorter::run(std::ifstream &infile)
{
    std::cout << "Hello! Please enter your target words. When you are"
                 "satisfied, enter '!'.\n";

    std::string input;
    while ( input != "!" ) {
        targets.push_back(input);
    }

    score(infile);
}