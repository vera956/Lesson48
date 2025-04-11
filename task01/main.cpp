#include "util.h"
#include "logic.h"

int main() {
	int size;

	cout << "Input size of array: ";
	cin >> size;

	int* array = new int[size];

	init(array,size,-50,100);

	cout << "Array: " << convert(array, size) << endl;

	cout << "Sum between extreem elements is " 
		<< sum_elevents_between_extrems(array, size) << endl;

	delete[] array;
	return 0;
}