// CTCI.cpp : This file contains the 'main' function for all CTCI problems.
//

#include "pch.h"
#include "ArraysAndStrings/ArraysAndStrings.h"
#include <iostream>

void runPermutation();
void runUnique();

int main()
{
	runUnique();
	runPermutation();
}


void runPermutation() {
	string word1 = "abcd";
	string word2 = "bca";
	cout << word1 + " is a permutation of " + word2 + " " << (PermutationAlgorithm::isPermutation(word1, word2) ? "true" : "false") << endl;
}


void runUnique() {
	string test = "albatross";
	UniqueAlgorithm algo("peach");
	cout << test << " isUnique: " << (algo.isUnique128(test) ? "true" : "false") << endl;
	cout << "Calling default isUniuqe128 on \"peach\": " << (algo.isUnique128() ? "true" : "false") << endl;
}


