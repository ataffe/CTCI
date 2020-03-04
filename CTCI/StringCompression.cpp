#include "pch.h"
#include "ArraysAndStrings.h"

string StringCompression::compress(string word) {
    if(word.length() <= 1) {
        return word;
    }
    sort(word.begin(), word.end());
    char previousChar = word[0];
    int counter = 1;
    string compressedString;
    for(int ctr = 1; ctr < word.length(); ctr++) {
        if(previousChar == word[ctr]) {
            counter++;
        } else {
            compressedString += previousChar;
            compressedString += to_string(counter);
            counter = 1;
            previousChar = word[ctr];
        }
    }
    compressedString += previousChar;
    compressedString += to_string(counter);
    return (compressedString.length() < word.length()) ? compressedString : word;
}
