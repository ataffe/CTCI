#include "pch.h"
#include "ArraysAndStrings.h"


bool UniqueAlgorithm::isUnique128() {
	if (word.length() > 128) {
		return false;
	}

	int storage[128 / 32] = {};
	for (int counter = 0; counter < word.length(); counter++) {
		if (((storage[word[counter] / 32] & (1 << word[counter] % 32)) >> word[counter] % 32) == 1) {
			return false;
		}
		storage[word[counter] / 32] |= (1 << word[counter] % 32);
	}
	return true;
}

bool UniqueAlgorithm::isUnique128(string input) {
	if (input.length() > 128) {
		return false;
	}

	int storage[128 / 32] = {};
	for (int counter = 0; counter < input.length(); counter++) {
		if (((storage[input[counter] / 32] & (1 << input[counter] % 32)) >> input[counter] % 32) == 1) {
			return false;
		}
		storage[input[counter] / 32] |= (1 << input[counter] % 32);
	}
	return true;
}