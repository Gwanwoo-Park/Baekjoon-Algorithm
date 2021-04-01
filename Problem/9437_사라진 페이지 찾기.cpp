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
	int n, p;
	int arr[250][4] = {0, };
	int count = 1;
	bool flag = false;

	while(1) {
		count = 1;
		flag = false;
		cin >> n;
		if (n == 0) break;
		cin >> p;

		for(int i = 0; i < n / 4; i++) {
			for(int j = 0; j < 2; j++) {
				arr[i][j] = count++;
			}
		}

		for(int i = n / 4 - 1; i >= 0; i--) {
			for(int j = 2; j < 4; j++) {
				arr[i][j] = count++;
			}
		}

		for(int i = 0; i < n / 4; i++) {
			for(int j = 0; j < 4; j++) {
				if (p == arr[i][j]) {
					if (arr[i][0] != p) printf("%d ", arr[i][0]);
					if (arr[i][1] != p) printf("%d ", arr[i][1]);
					if (arr[i][2] != p) printf("%d ", arr[i][2]);
					if (arr[i][3] != p) printf("%d ", arr[i][3]);
					printf("\n");
					flag = true;
					break;
				}
			}
			if (flag) break;
		}
	}

}
