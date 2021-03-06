// CTCI.cpp : This file contains the 'main' function for all CTCI problems.
//

#include "pch.h"
#include "ArraysAndStrings/ArraysAndStrings.h"
#include <iostream>

void runPermutation();
void runUnique();
void runPalindromePermutation();
void runUrlify();
void runOneAway();

int main()
{
	runUnique();
	runPermutation();
	runPalindromePermutation();
	runUrlify();
	runOneAway();
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


void runPalindromePermutation() {
	PalindromePermutation pp;
	cout << "race is palindrome? : " << (pp.isPalindromePermutation(string("race")) ? "true" : "false") << endl;
}

void runUrlify() {
	string url = "http://test alex/test";
	Urlify processor;
	cout << "Urlified string is: " << processor.urlify(url) << endl;
}

void runOneAway() {
	string word1 = "aple";
	string word2 = "apple";
	OneAway editor;
	cout << word1 << " is one edit away from " << word2 << " :" << ((editor.isOneAway(word1, word2)) ? "true" : "false") << endl;
}


