#include <iostream>
#include <vector>
#include "field.h"

int Field::check() {
		int res = 0;
		for (int i = 0; i < field_size * field_size; i += field_size) {
			if (res == 1 || res == 2) {
				return res;
			}
			else {
				res = gorizontal(i);
			}
		}
		res = 0;
		for (int i = 0; i < field_size; i++) {
			if (res == 1 || res == 2) {
				return res;
			}
			else {
				res = vertical(i);
			}
		}

		res = diagonal();

		for (int i = 0; i < field_size * field_size; i++) {
			if (fieldV[i] == 0) {
				break;
			}
			else {
				if (i == field_size * field_size - 1) {
					res= 3;
					return res;
				}

			}
		}
		return res;
}
