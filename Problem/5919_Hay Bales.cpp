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
	int n;

	cin >> n;

	int* arr = new int[n];
	int sum = 0;
	int max = 0;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];

		sum += arr[i];
	}

	sum /= n;

	int result = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] > sum) {
			result += arr[i] - sum;
		}
	}

	cout << result << '\n';
}
