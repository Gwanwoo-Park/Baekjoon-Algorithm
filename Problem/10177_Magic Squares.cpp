#define _USE_MATH_DEFINES
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <stdio.h>
using namespace std;

int main() {
	int n, m;
	int sum = 0;
	bool flag = true;

	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> m;

		sum = 0;
		flag = true;
		int tmp = 0;
		int tmp2 = 0;

		int arr[5][5] = {0, };

		for(int j = 0; j < m; j++) {
			for(int k = 0; k < m; k++) {
				cin >> arr[j][k];
			}
		}

		for(int j = 0; j < m; j++) {
			sum += arr[0][j];
		}

		for(int j = 0; j < m; j++) {
			for(int k = 0; k < m; k++) {
				tmp += arr[j][k];
			}
			if (tmp != sum) {
				cout << "Not a magic square\n";
				flag = false;
				goto print;
			}
			tmp = 0;
		}

		tmp = 0;

		for(int j = 0; j < m; j++) {
			for(int k = 0; k < m; k++) {
				tmp += arr[k][j];
			}
			if (tmp != sum) {
				cout << "Not a magic square\n";
				goto print;
			}
			tmp = 0;
		}

		tmp = 0;

		for(int j = 0; j < m; j++) {
			tmp += arr[j][j];
		}
		if (tmp != sum) {
			cout << "Not a magic square\n";
			goto print;
		}

		tmp = 0;

		for(int j = 0, k = m - 1; j < m, k >= 0; j++, k--) {
			tmp += arr[j][k];
		}
		if (tmp != sum) {
			cout << "Not a magic square\n";
			goto print;
		}

		cout << "Magic square of size " << m << '\n';

		print:;
	}
}
