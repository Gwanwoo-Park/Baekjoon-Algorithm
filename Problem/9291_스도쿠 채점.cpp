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
	int t;
	bool flag = true;
	int num = 0;

	cin >> t;

	for(int i = 0; i < t; i++) {
		num++;
		flag = true;
		int arr[10][10] = {0, };

		for(int j = 1; j < 10; j++)
			for(int k = 1; k < 10; k++)
				cin >> arr[j][k];

		
		printf("Case %d: ", num);

		for(int j = 1; j < 10; j++) {
			int compare[10] = {0, };

			for(int k = 1; k < 10; k++) {
				compare[arr[j][k]]++;
				if (compare[arr[j][k]] > 1) {
					cout << "INCORRECT\n";
					flag = false;
					break;
				}
			}

			if (!flag) break;
		}

		if (!flag) continue;

		for(int j = 1; j < 10; j++) {
			int compare[10] = {0, };

			for(int k = 1; k < 10; k++) {
				compare[arr[k][j]]++;
				if (compare[arr[k][j]] > 1) {
					cout << "INCORRECT\n";
					flag = false;
					break;
				}
			}

			if (!flag) break;
		}
		
		if (!flag) continue;

		int compare[10] = {0, };

		// 1
		for(int j = 1; j < 4; j++) {
			for(int k = 1; k < 4; k++) {
				compare[arr[j][k]]++;
				if (compare[arr[j][k]] > 1) {
					cout << "INCORRECT\n";
					flag = false;
					break;
				}
			}

			if (!flag) break;
		}
		
		if (!flag) continue;

		memset(compare, 0, sizeof(compare));

		// 2
		for(int j = 1; j < 4; j++) {
			for(int k = 4; k < 7; k++) {
				compare[arr[j][k]]++;
				if (compare[arr[j][k]] > 1) {
					cout << "INCORRECT\n";
					flag = false;
					break;
				}
			}

			if (!flag) break;
		}
		
		if (!flag) continue;

		memset(compare, 0, sizeof(compare));

		// 3
		for(int j = 1; j < 4; j++) {
			for(int k = 7; k < 10; k++) {
				compare[arr[j][k]]++;
				if (compare[arr[j][k]] > 1) {
					cout << "INCORRECT\n";
					flag = false;
					break;
				}
			}

			if (!flag) break;
		}
		
		if (!flag) continue;

		memset(compare, 0, sizeof(compare));

		//4
		for(int j = 4; j < 7; j++) {
			for(int k = 1; k < 4; k++) {
				compare[arr[j][k]]++;
				if (compare[arr[j][k]] > 1) {
					cout << "INCORRECT\n";
					flag = false;
					break;
				}
			}

			if (!flag) break;
		}

		if (!flag) continue;

		memset(compare, 0, sizeof(compare));

		//5
		for(int j = 4; j < 7; j++) {
			for(int k = 4; k < 7; k++) {
				compare[arr[j][k]]++;
				if (compare[arr[j][k]] > 1) {
					cout << "INCORRECT\n";
					flag = false;
					break;
				}
			}

			if (!flag) break;
		}
		
		if (!flag) continue;

		memset(compare, 0, sizeof(compare));

		//6
		for(int j = 4; j < 7; j++) {
			for(int k = 7; k < 10; k++) {
				compare[arr[j][k]]++;
				if (compare[arr[j][k]] > 1) {
					cout << "INCORRECT\n";
					flag = false;
					break;
				}
			}

			if (!flag) break;
		}

		if (!flag) continue;

		memset(compare, 0, sizeof(compare));

		//7
		for(int j = 7; j < 10; j++) {
			for(int k = 1; k < 4; k++) {
				compare[arr[j][k]]++;
				if (compare[arr[j][k]] > 1) {
					cout << "INCORRECT\n";
					flag = false;
					break;
				}
			}

			if (!flag) break;
		}
		
		if (!flag) continue;

		memset(compare, 0, sizeof(compare));

		//8
		for(int j = 7; j < 10; j++) {
			for(int k = 4; k < 7; k++) {
				compare[arr[j][k]]++;
				if (compare[arr[j][k]] > 1) {
					cout << "INCORRECT\n";
					flag = false;
					break;
				}
			}

			if (!flag) break;
		}
		
		if (!flag) continue;

		memset(compare, 0, sizeof(compare));

		//9
		for(int j = 7; j < 10; j++) {
			for(int k = 7; k < 10; k++) {
				compare[arr[j][k]]++;
				if (compare[arr[j][k]] > 1) {
					cout << "INCORRECT\n";
					flag = false;
					break;
				}
			}

			if (!flag) break;
		}
		
		if (!flag) continue;


		if (flag) cout << "CORRECT\n";
	}
}
