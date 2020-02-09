#include "pch.h"
#include "ArraysAndStrings/ArraysAndStrings.h"

bool PalindromePermutation::isPalindromePermutation(string word) {
	if (word.empty()) {
		return false;
	}

	int storage = 0;
	bool flag = false;
	for (int counter = 0; counter < word.length(); counter++) {
		storage ^= 1 << (((int)word[counter]) - ((int)'a'));
	}
	// TODO: Fix: this is off by 1 when bit shifting.
	for (int counter = 0; counter < 26; counter++) {
		if ((storage & (1 << counter)) == 1 && !flag) {
			flag = true;
		}
		else if ((storage & (1 << counter)) == 1 && !flag) {
			return false;
		}
	}
	return true;
}