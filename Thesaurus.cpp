/*
 *
 *  Thesaurus.cpp
 *  j.r. blum
 *  defines the methods of the thesaurus class, to be created by a
 *  given file.
 *
 */

#include "Thesaurus.h"

/*
 *  default constructor, creates empty thesaurus
 */
Thesaurus::Thesaurus()
{}


/*
 *  parameter constructor, reads in a thesaurus data structure from a file
 */
Thesaurus::Thesaurus(std::ifstream &infile)
{
    std::string newWords; // declare string to be held for each word
    // while file isn't eof
    while ( infile.good() ) {
        std::getline(infile, newWords); // get each line
        words.emplace_back(newWords); // create a new word with the line
    }
}

/*
 *  adds a new keyword into the words vector
 */
void Thesaurus::add(KeyWord addition)
{
    words.push_back(addition); // push new word
}

/*
 *  returns a given key word from a target
 */
KeyWord Thesaurus::search(std::string target)
{
    // loop through thesaurus to find word
    for ( int i = 0; i < words.size(); i++ ) {
        if ( words.at(i).getName() == target ) {
            return words.at(i); // return word
        }
    }
    return KeyWord(""); // else return empty word
}