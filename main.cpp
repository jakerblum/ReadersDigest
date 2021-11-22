/*
 *
 *  main.cpp
 *  j.r. blum
 *
 */

#include <iostream>
#include <fstream>
#include "Sorter.h"

int main(int argc, char *argv[])
{
    // if two arguments not providec
    if ( argc != 3 ) {
        std::cerr << "Failed to include article to score, or a reference "
                     "thesaurus.\n\n Typical usage: ./ReadersDigest 'Article' "
                     "'Thesaurus'\n\n Goodbye.\n";
        exit(EXIT_FAILURE);
    }

    std::ifstream infile; // declare article file
    infile.open(argv[1]); // open article file
    std::ifstream reference; // declare thesaurus file
    reference.open(argv[2]); // open thesaurus file

    // if either don't open
    if ( not infile.is_open() or not reference.is_open() ) {
        std::cerr << "Failed to open file(s). Please try again.\n";
        exit(EXIT_FAILURE);
    }

    Sorter driver = Sorter(reference); // initialize sorter
    driver.run(infile); // run sorter

    return 0;
}
