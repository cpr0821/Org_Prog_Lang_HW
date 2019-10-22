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

