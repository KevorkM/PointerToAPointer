#include <iostream>
#include "Source.h"

using namespace std;

void Resize(int** optrArrayn, int newSize);

int main() {

	cout << "pointer to a pointer\n" << endl;

	const int Max = 10;

	int* optrArray = new int[Max];

	int length = Max;

	do {
		cout << "Length is now: " << length << endl;
		for (int i = 0; i < length; i++) {
			optrArray[i] = i + 1;

			cout << "optrArray[" << i << "]: " << optrArray[i] << endl;
		}

		cout << "Please input the new length of the array (>= 0 will quit): ";
		cin >> length;
		if (length > 0) {
			Resize(&optrArray, length);
		}
	} while (length > 0);

	delete[] optrArray;

	return 0;
}

void Resize(int** optrArray, int newSize) {

	if (optrArray != nullptr) {
		delete[] * optrArray;
	}
	*optrArray = new int[newSize];
}