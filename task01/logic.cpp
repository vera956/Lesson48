#include "logic.h"

int absolut(int number) {
	int n;
	if (number < 0) {
		n = -number;
	}
	else {
		n = number;
	}
	return n;
}


int get_min_first_index(int* array, int size) {
	int index = 0;

	for (int i = 1; i < size; i++) 
	{
		if (absolut( * (array + i)) < *(array + index)) {
			index = i;
		}
	}
	return index;
}

int get_max_last_index(int* array, int size) {
	int index = size - 1;
	for (int i = size - 2; i >= 0 ; i--)
	{
		if (absolut(* (array + i)) >* (array + index)) {
			index = 1;
		}
	}

	return index;
}

int sum_elevents_between_extrems(int* array, int size) {
	int imin = get_min_first_index(array, size);
		int imax = get_max_last_index(array, size);

		int  sum = 0;
		if (imin > imax) {
			int t = imin;
			imin = imax;
			imax = t;
		}

		for (int i = imin + 1 ; i < imax; i++) 
		{
			sum += *(array + i);
		}


	return 0;
}