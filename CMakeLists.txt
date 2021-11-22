cmake_minimum_required(VERSION 2.8)
project(ReadersDigest)

set(CMAKE_CXX_STANDARD 14)

add_executable(ReadersDigest main.cpp Thesaurus.cpp Thesaurus.h KeyWord.cpp KeyWord.h Sorter.cpp Sorter.h)
