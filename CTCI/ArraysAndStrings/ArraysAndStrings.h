#ifndef ARRAYS_AND_STINGS_H
#define ARRAYS_AND_STRING_H
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class PermutationAlgorithm {
public:
	// Testing default args
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
	//Constructor
	UniqueAlgorithm(string inputWord) : word(inputWord) {}
	bool isUnique128();
	bool isUnique128(string input);
};

class URLIFY {

public: 
	string 
};
#endif