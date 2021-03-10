#define _USE_MATH_DEFINES
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <stdio.h>
using namespace std;

bool desc(int a, int b) {
	return a > b;
}

int main() {
	int n;
	int arr[100000];

	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n, desc);

	int start = 1;
	int end = 0;

	for(int i = 0; i < n; i++) {
		start++;
		if (start + arr[i] > end) end = start + arr[i];
	}

	cout << end << '\n';
}
