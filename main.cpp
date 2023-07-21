#include <iostream>
#include <vector>
#include "field.h"

int main() {
	int game;
	Field field;
	field.init();
	field.print();
	game = 0;
	while (game == 0) {
		field.Move(1);
		field.print();
		game = field.check();
		if (game == 0) {
			field.Move(2);
			field.print();
			game = field.check();
		}
	}
	if (game == 1) { std::cout << "win X\n"; }
	if (game == 2) { std::cout << "win 0\n"; }
	if (game == 3) { std::cout << "drawn game\n"; }
	return 0;
}