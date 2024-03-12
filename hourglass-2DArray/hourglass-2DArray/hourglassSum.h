#include <iostream>
using namespace std;

#define ROW 6
#define COL 6

class hSum {

public:

	hSum(); // empty constructor
	int calculateMax(int arr[ROW][COL]); // calculate the hour glass sums and return max value
};

hSum::hSum() {
	// do nothing
}

int hSum::calculateMax(int arr[ROW][COL]) {
	int max_sum = 0;
	int sum = 0;

	for (int i = 1; i < ROW - 1; i++) {
		for (int j = 1; j < COL - 1; j++) {
			// extract and add each selection
			sum += (arr[i - 1][j - 1] + arr[i - 1][j] + arr[i - 1][j + 1] + arr[i][j] + arr[i + 1][j - 1] + arr[i + 1][j] + arr[i + 1][j + 1]);
			
			cout << sum << endl; // debug
			
			if (sum > max_sum) {
				max_sum = sum;
			}

			sum = 0;
		}
	}

	return max_sum;
}
