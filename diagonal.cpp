#include <iostream>
#include <vector>
#include "field.h"

int Field::diagonal()
	{
		int result = 0;
		for (int i = 0; i < field_size * field_size; i += field_size + 1)
		{
			if (fieldV[i] == 1)
			{
				result = 1;
			}
			else
			{
				result = 0;
				break;
			}
			if (i == field_size * field_size - 1)
			{
				return result;
			}
		}
		for (int i = field_size - 1; i <= field_size * field_size - field_size; i += field_size - 1)
		{
			if (fieldV[i] == 1)
			{
				result = 1;
			}
			else
			{
				result = 0;
				break;
			}
			if (i == field_size * field_size - field_size)
			{
				return result;
			}
		}

		for (int i = 0; i < field_size * field_size; i += field_size + 1)
		{
			if (fieldV[i] == 2)
			{
				result = 2;
			}
			else
			{
				result = 0;
				break;
			}
			if (i == field_size * field_size - 1)
			{
				return result;
			}
		}
		for (int i = field_size - 1; i <= field_size * field_size - field_size; i += field_size - 1)
		{
			if (fieldV[i] == 2)
			{
				result = 2;
			}
			else
			{
				result = 0;
				break;
			}
			if (i == field_size * field_size - field_size)
			{
				return result;
			}
		}

		return result;
	}
