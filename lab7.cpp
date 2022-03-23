// Jason Wang
// File: lab7.cpp
// Date: 11/14/2020
// Purpose: use a Huffman tree to decode text that was compressed with its
// encodings. The decoding algorithm is to read each bit from the file, one
// at a time, and use this bit to traverse the Huffman tree. If the bit is a
// 0, you move left in the tree. If the bit is 1, you move right. You do this
// until you hit a leaf node. Leaf nodes represent characters, so once you
// reach a leaf, you output that character.

// TODO: Analysis (extra credit)
//  1. Book from Project Gutenberg: [TITLE] by [AUTHOR]
//  2. Encoded file size: [ADD SIZE]
//     Original file size: [ADD SIZE]
//     Percent savings: [ADD PERCENT]% savings
//  3. gzip compressed book size: [ADD SIZE]
//     The gzip compressed file is the [SMALLER/LARGER] than the encoded book

#include "HuffmanTree.h"
#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[])
{
    HuffmanTree hc;
    string inputFile, outputFile;

    cout << "Please enter the input filename: ";
    cin >> inputFile;
    cout << "Please enter the output file: ";
    cin >> outputFile;

    // create code tree
    hc.createCodeTree(inputFile);

    // encode file
    hc.encodeFile(inputFile, outputFile);

    // decode file
    hc.decodeFile(outputFile);

    // print
    cout << hc;

    return 0;
}