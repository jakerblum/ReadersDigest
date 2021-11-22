/*
 *
 *  KeyWord.cpp
 *  j.r. blum
 *  defines the methods of the keyword class
 *
 */

#include "KeyWord.h"

/*
 *  default constructor, creates a word object using an infile (typically will
 *  be a string stream) to determine all of its synonyms
 */
KeyWord::KeyWord(std::string str)
{
    std::stringstream ss(str);
    ss >> name; // first, take in key word

    std::string syn; // declare var for each synonym
    while ( ss.good() ) {
        ss >> syn; // move through istream, reading synonyms into vector
        synonyms.push_back(syn);
    }
}

/*
 *  returns a bool on whether a given string is a synonym of the KeyWord
 */
bool KeyWord::findSyn(std::string target)
{
    // loop through synonyms vector and check if target is equal to each
    for ( int i = 0; i < synonyms.size(); i++ ) {
        if ( synonyms.at(i) == target ) {
            return true; // if they match, return true
        }
    }
    return false; // if loop ends and no matches, return false
}

/*
 *  returns the name of the key word
 */
std::string KeyWord::getName()
{
    return name;
}