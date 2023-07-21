#include <iostream>
#include <vector>
#include "field.h"
#include <stdexcept>
#include <limits>

void Field::Move(char n) {
		int move;
		int column;
		int row;
		int ver = 0;
		while (ver == 0) {
			std::cout << "Your move. Enter the row and column number. \n";
			std::cin >> move;
			if (!std::cin) {
				std::cout << "FUCKING BASTARD. PLS GIVE ME A ROW AND COLUMN\n";
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			column = move % 10;
			row = (move - column) / 10;
			int cage = (row - 1) * field_size + (column - 1);
			if ((cage >= 0 && cage < field_size * field_size) && (column <= MaxCage % 10) && fieldV[cage] == 0) {
				ver = 1;
				if (n == 1) { fieldV[cage] = 1; }
				if (n == 2) { fieldV[cage] = 2; }
			}
		}
	}