#include <iostream>
#include <vector>
#include "field.h"

void Field::print() {
		int pointer = field_size;
		int i, j;
		std::cout << "  ";

		for (i = 1; i <= field_size; i++)
			std::cout << i << " ";

		std::cout << "\n";

		for (i = 1; i <= field_size; i++) {
			std::cout << i;
			for (j = i * field_size - pointer; j < field_size * i; j++) {
				if (fieldV[j] == 0) { std::cout << "| "; }
				if (fieldV[j] == 1) { std::cout << "|X"; }
				if (fieldV[j] == 2) { std::cout << "|O"; }
			}

			std::cout << "|\n";
			for (char z = 1; z <= field_size + 1; z++) {
				std::cout << "__";
			}
			std::cout << "\n";
		}

	}