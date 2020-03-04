#include "pch.h"
#include "ArraysAndStrings/ArraysAndStrings.h"


string Urlify::urlify(string url) {
	if (url.length() < 1) {
		return url;
	}

	string encoded;
	for (int ctr = 0; ctr < url.length(); ctr++) {
		if (url[ctr] == ' ') {
			encoded += "%20";
		} else {
			encoded += url[ctr];
		}
	}
	return encoded;
}