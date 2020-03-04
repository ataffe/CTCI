#include "pch.h"
#include "ArraysAndStrings/ArraysAndStrings.h"
#include <cmath>

bool OneAway::isOneAway(string word1, string word2) {
	if (abs((int)word1.length() - (int)word2.length()) > 1) {
		return false;
	}

	string shorter = (word1.length() < word2.length()) ? word1 : word2;
	string longer = (word1.length() < word2.length()) ? word2 : word1;

	int i = 0, j = 0;
	int foundDiffs = 0;
	while (i < shorter.length() && j < longer.length()) {
		if (shorter[i] != longer[j]) {
			if (foundDiffs < 1) {
				foundDiffs++;
				if (shorter.length() == longer.length()) {
					i++;
				}
			} else {
				return false;
			}
		}
		else {
			i++;
		}
		j++;
	}
	return true;
}