#include <iostream>
#include <vector>
#include "field.h"

int Field::FindMaxCage(int a, int b) {
		int comb = 1;
		while (comb <= b)
			comb *= 10;
		return a * comb + b;
	}