/******************************************************************************

							  Online C++ Compiler.
			   Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include "pch.h"
#include "ArraysAndStrings.h"


bool permutationAlgorithm::isUniuqe128() {
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



