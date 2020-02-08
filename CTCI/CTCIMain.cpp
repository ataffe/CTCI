// CTCI.cpp : This file contains the 'main' function for all CTCI problems.
//

#include "pch.h"
#include "ArraysAndStrings/ArraysAndStrings.h"
#include <iostream>

void runPermutation();

int main()
{
	runPermutation();
}


void runPermutation() {
	permutationAlgorithm algo("testWord");
	// cout << test << " isUnique: " << (algo.isUniuqe128() ? "true" : "false") << endl;
	// cout << "Calling default isUniuqe128: " << (algo.isUniuqe128() ? "true" : "false") << endl; 

	string word1 = "abcd";
	string word2 = "bca";

	cout << word1 + " is a permutation of " + word2 + " " << (permutationAlgorithm::isPermutation(word1, word2) ? "true" : "false") << endl;
}


