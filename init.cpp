#include <iostream>
#include <vector>
#include "field.h"
#include <stdexcept>
#include <limits>

void Field::init() {
		std::cout << "enter a number from 3 to 9:\n";
		while (1) {
			std::cin >> field_size;

			if (!std::cin || field_size > 9 || field_size < 3) {
				std::cout << "YOU ARE STUPID MONKEY. GIVE ME A NUMBER FROM 3 to 9\n";
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			else {
				MaxCage = FindMaxCage(field_size, field_size);
				fieldV.resize(field_size * field_size, 0);
				break;
			}
		}
	}