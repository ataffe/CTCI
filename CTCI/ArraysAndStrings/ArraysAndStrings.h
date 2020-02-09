#ifndef ARRAYS_AND_STINGS_H
#define ARRAYS_AND_STRING_H
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class PermutationAlgorithm {
public:
	// Algorithm to check if word 1 is a permuation of word 2
	// Time Complexity: O(n log n) n = size of largest input string.
	// Space Complexity: O(1)
	static bool isPermutation(string word1, string word2) {
		if (word1.length() != word2.length()) {
			return false;
		}
		sort(word1.begin(), word1.end());
		sort(word2.begin(), word2.end());
		for (int counter = 0; counter < word1.length(); counter++) {
			if (word1[counter] != word2[counter]) {
				return false;
			}
		}
		return true;
	}
};

class UniqueAlgorithm {
private:
	string word;
public:
	// Algorithm to determine if a string contains all unique characters
	// Time Complexity: O(n) n= size of input string
	// Space Complexity: O(c) c= size of alphabet
	UniqueAlgorithm(string inputWord) : word(inputWord) {}
	
	bool isUnique128();
	bool isUnique128(string input);
};

class URLIFY {

public: 
	string urlify(string);
};


class PalindromePermutation {
public:
	bool isPalindromePermutation(string word);
};
#endif