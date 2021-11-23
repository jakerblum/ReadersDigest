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
    reference = Thesaurus(infile); // initialize thesaurus
}

/*
 *  adds target to vector to look for in article
 */
void Sorter::addTarget(KeyWord add)
{
    targets.push_back(add); // push back targets vector
}

/*
 *  scores the article from the given ifstream based on matching keywords
 */
void Sorter::score(std::ifstream &infile)
{
    std::cout << "Scoring...\n";
    std::string word; // initialize word var
    int match = 0; // initialize matches int

    while ( infile.good() ) {
        infile >> word; // read in word from file
        word[0] = tolower(word[0]); // make lowercase
        for ( int i = 0; i < targets.size(); i++ ) {
            if ( targets.at(i).getName() == word or targets.at(i).findSyn(word) ) {
                match++; // if a match, increment score
            }
        }
    }
    std::cout << "Article scored! Analyzing score...\n";

    printFinalScore(match); // print score
}

/*
 *  runs the sorter
 */
void Sorter::run(std::ifstream &infile)
{
    std::cout << "Hello! Please enter your target words. When you are"
                 " satisfied, enter '!'.\n";

    std::string input; // initialize input string
    while ( input != "!" ) {
        std::cin >> input; // cin input
        KeyWord insert = reference.search(input); // search thesaurus
        addTarget(insert); // add to targets vector
    }

    score(infile); // score article
}

/*
 *  prints final score
 */
void Sorter::printFinalScore(int sc)
{
    std::cout << "This article's score was " << sc << ". ";
    if ( sc == 0 ) {
        std::cout << "Maybe try another one.\n";
    }
    else if ( sc > 0 and sc <= 5 ) {
        std::cout << "This article could be interesting!\n";
    }
    else if ( sc > 5 ) {
        std::cout << "This is a must-read!\n";
    }
}