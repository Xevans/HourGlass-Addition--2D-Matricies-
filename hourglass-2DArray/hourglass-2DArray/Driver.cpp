#include <iostream>
#include "hourglassSum.h"
using namespace std;

#define ROW 6
#define COL 6


int main() {

	// make a 6x6 2D array and print it out
	/*int arr[ROW][COL] = {
		{-9, -9, -9, 1, 1, 1},
		{0, -9, 0, 4, 3, 2},
		{-9, -9, -9, 1, 2, 3},
		{0, 0, 8, 6, 6, 0},
		{0, 0, 0, -2, 0, 0},
		{0, 0, 1, 2, 4, 0}
	};*/

	int arr[ROW][COL] = {
		{1, 1, 1, 0, 0, 0},
		{0, 1, 0, 0, 0, 0},
		{1, 1, 1, 0, 0, 0},
		{0, 0, 2, 4, 4, 0},
		{0, 0, 0, 2, 0, 0},
		{0, 0, 1, 2, 4, 0}
	};


	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	hSum hourglass;
	cout << "\n\nMax hourglass sum found: " << hourglass.calculateMax(arr);

	// test array with sum function -- passed
}