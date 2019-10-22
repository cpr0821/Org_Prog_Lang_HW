// Q6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Create a 2D array
	int arr[10][10];

	// Put values in there
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			arr[i][j] = (j + i) * 2;
		}
	}

	// Print all values using subscripting
	cout << "Printing all values using subscripting: " << endl;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << right << setw(5) << arr[i][j] << " ";
		}
		cout << endl;
	}

	// Print all values using pointers and pointer arithmetic
	cout << "Printing all values using pointers and pointer arithmetic: " << endl;
	int* pointer = &arr[0][0];
	for (int i = 0, j = 1; i < 100; i++, j++, pointer++) {
		cout << right << setw(5) << *pointer << " ";
		if (j % 10 == 0) {
			cout << endl;
		}
	}

}
