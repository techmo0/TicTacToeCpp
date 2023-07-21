#include <iostream>
#include <vector>
#include "field.h"

int Field::vertical(int x) {
		int result = 0;
		int i = x;
		int z = field_size * field_size - (field_size - x);
		for (i = x; i <= z; i += field_size) {
			if (fieldV[i] == 1) {
				result = 1;
			}
			else {
				result = 0;
				break;
			}
			if (i == z) {
				return result;
			}
		}
		for (i = x; i <= z; i += field_size) {
			if (fieldV[i] == 2) {
				result = 2;
			}
			else {
				result = 0;
				break;
			}
			if (i == z) {
				return result;
			}
		}
		return result;
	}