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


bool desc(int a, int b) {
	return a > b;
}

int main() {
	int t;

	cin >> t;

	for (int i = 0; i < t; i++) {
		int a, b;

		cin >> a >> b;

		int* one = new int[a];
		int* two = new int[b];

		for (int j = 0; j < a; j++) {
			cin >> one[j];
		}
		for (int j = 0; j < b; j++) {
			cin >> two[j];
		}

		sort(one, one + a, desc);
		sort(two, two + b, desc);

		int sum = 0;

		for (int j = 0; j < a; j++) {
			for (int k = 0; k < b; k++) {
				if (one[j] > two[k]) {
					sum += b - k;
					break;
				}
			}
		}
		cout << sum << '\n';
	}
}
