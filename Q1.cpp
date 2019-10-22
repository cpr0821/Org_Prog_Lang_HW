// orgproghw3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <time.h>
#define SIZE 10000
using namespace std;

void array_static() {
	static int arr[SIZE];
}

void array_stack() {
	int arr_stk[SIZE];
}

void array_heap() {
	int* arr_heap = new int[SIZE];
	delete[] arr_heap;
}

int main()
{
	clock_t start1, end1, start2, end2, start3, end3;
	float seconds1, seconds2, seconds3;

	start1 = clock();
	for (int i = 0; i < 100000; i++) {
		array_static();
	}
	end1 = clock();

	start2 = clock();
	for (int i = 0; i < 100000; i++) {
		array_stack();
	}
	end2 = clock();
	start3 = clock();
	for (int i = 0; i < 100000; i++) {
		array_heap();
	}
	end3 = clock();

	seconds1 = ((float)end1 - (float)start1) / CLOCKS_PER_SEC;
	seconds2 = ((float)end2 - (float)start2) / CLOCKS_PER_SEC;
	seconds3 = ((float)end3 - (float)start3) / CLOCKS_PER_SEC;

	cout << "The execution time for the static array is: " << seconds1 << endl;
	cout << "The execution time for the stack array is: " << seconds2 << endl;
	cout << "The execution time for the heap array is: " << seconds3 << endl;
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
