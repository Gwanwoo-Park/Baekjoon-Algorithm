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
	int m, n;

	scanf("%d %d", &m, &n);

	int **storage = new int*[m];
	for(int i = 0; i < m; i++) {
		storage[i] = new int[n];
		memset(storage[i], 0, sizeof(int)*n);
	}

	int result[5];

	memset(result, 0, sizeof(int)*5);

	int gizun = -1;

	char s[5000];

	for(int i = 0; i < m; i++) {
		scanf("%s", s);

		gizun++;

		for(int k = 0; k < 4; k++) {
			scanf("%s", s);

			int index = 0;


			for(int j = 1; j < n * 5 - 3; j += 5) {
				if (s[j] == '*') {
					storage[gizun][index]++;
				}
				index++;
			}
		}
	}

	scanf("%s", s);
	
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			result[storage[i][j]]++;
		}
	}
		
	for(int i = 0; i < 5; i++) {
		cout << result[i] << ' ';
	}
}
