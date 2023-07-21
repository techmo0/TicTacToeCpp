#include <iostream>
#include <vector>
#include "field.h"

int Field::gorizontal(int x) {
		int result = 0;
		int z = x + field_size;
		int i = x;
		for (i = x; i < z; i++) {
			if (fieldV[i] == 1) {
				result = 1;
			}
			else {
				result = 0;
				break;
			}
			if (i == z - 1) {
				return result;
			}
		}
		for (i = x; i < z; i++) {
			if (fieldV[i] == 2) {
				result = 2;
			}
			else {
				result = 0;
				break;
			}
			if (i == z - 1) {
				return result;
			}
		}
		return result;
	}