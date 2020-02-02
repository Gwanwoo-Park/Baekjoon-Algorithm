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

int main(){
	int n;
	int number;

	cin >> n;
	cin >> number;

	int **arr = new int*[n];
	for(int i = 0; i < n; i++) {
		arr[i] = new int[n];
		memset(arr[i], 0, sizeof(int) * n);
	}

	int tmp = n / 2;
	int x = tmp;
	int y = tmp;

	int a, b;

	int increase = 1;
	int count = 1;
	int pandan = 0;

	arr[x][y] = increase++;
	if (increase - 1 == number) {
		a = x;
		b = y;
	}

	while(1) {
		if (count == n) {
			for(int i = 0; i < count - 1; i++) {
				arr[--x][y] = increase++;
				if (increase - 1 == number) {
					a = x;
					b = y;
				}
			}
			break;
		}

		if (pandan < 1) {
			for(int i = 0; i < count; i++) {
				arr[--x][y] = increase++;
				if (increase - 1== number) {
					a = x;
					b = y;
				}
			}
			for(int i = 0; i < count; i++) {
				arr[x][++y] = increase++;
				if (increase - 1 == number) {
					a = x;
					b = y;
				}
			}
			pandan++;
		} else {
			for(int i = 0; i < count; i++) {
				arr[++x][y] = increase++;
				if (increase - 1 == number) {
					a = x;
					b = y;
				}
			}
			for(int i = 0; i < count; i++) {
				arr[x][--y] = increase++;
				if (increase - 1 == number) {
					a = x;
					b = y;
				}
			}
			pandan = 0;
		}
		count++;
	}

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	printf("%d %d\n", a + 1, b + 1);
}