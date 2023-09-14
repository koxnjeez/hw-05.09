#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int rows = 5, cols = 5;
	int num[rows][cols];

	for (int y = 0; y < rows; y++) {
		for (int x = 0; x < cols; x++) {
			if (y == 0 or y == 4) {
				num[y][x] = 1;
			}
			else {
				if (x == 0 or x == 4) {
					num[y][x] = 1;
				}
				else {
					num[y][x] = 0;
				}
			}
			cout << num[y][x];
		}
		cout << endl;
	}

	cout << endl;

	const int rows2 = 10, cols2 = 10;
	int num2[rows2][cols2], f1 = 0, s1 = 9;

	for (int y = 0; y < rows2; y++) {
		for (int x = 0; x < cols2; x++) {
			if (x == f1 or x == s1) {
				num2[rows2][cols2] = 1;
			}
			else {
				num2[rows2][cols2] = 0;
			}
			cout << num2[rows2][cols2];
		}
		f1 += 1;
		s1 -= 1;
		cout << endl;
	}
}