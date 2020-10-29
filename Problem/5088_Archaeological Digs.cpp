#define _USE_MATH_DEFINES
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <stdio.h>
#include <cstdlib>
using namespace std;


int main() {
	int x, y;

	while (true) {

		cin >> x >> y;

		if (x == 0 && y == 0) break;

		int** arr = new int* [x];
		for (int i = 0; i < x; i++) {
			arr[i] = new int[y];
			memset(arr[i], 0, sizeof(int) * y);
		}

		int m;

		cin >> m;

		for (int i = 0; i < m; i++) {
			cin >> x >> y;

			arr[x][y]++;
		}

		int n;

		cin >> n;

		int result = 0;

		for (int i = 0; i < n; i++) {
			cin >> x >> y;

			if (arr[x][y] > 0) {
				result += arr[x][y];
			}
		}

		printf("%d\n", result);

		for (int i = 0; i < x; i++) {
			delete[] arr[i];
		}
		delete[] arr;
	}
}
