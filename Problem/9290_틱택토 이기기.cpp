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
	int t;
	int cas = 1;

	cin >> t;

	for(int i = 0; i < t; i++) {
		char s[4][4];

		for(int j = 0; j < 3; j++) {
			cin >> s[j];
		}

		char namgyu;
		cin >> namgyu;

		int count = 0;
		int one = -5;
		int two = -5;
		int pandan = 0;

		for(int j = 0; j < 3; j++) {
			for(int k = 0; k < 3; k++) {
				if(s[j][k] == namgyu) {
					count++;
				} else if(s[j][k] == '-') {
					one = j;
					two = k;
				}
			}
			if(count == 2) {
				pandan = 1;
				break;
			}
			count = 0;
		}

		if(pandan == 0) {
			for(int j = 0; j < 3; j++) {
				for(int k = 0; k < 3; k++) {
					if(s[k][j] == namgyu) {
						count++;
					} else if(s[k][j] == '-') {
						one = k;
						two = j;
					}
				}
				if(count == 2) {
					pandan = 1;
					break;
				}
				count = 0;
			}
		}

		if(pandan == 0) {
			if(s[0][0] == namgyu) count++;
			else if(s[0][0] == '-') {
				one = 0;
				two = 0;
			}
			if(s[1][1] == namgyu) count++;
			else if(s[1][1] == '-') {
				one = 1;
				two = 1;
			}
			if(s[2][2] == namgyu) count++;
			else if(s[2][2] == '-') {
				one = 2;
				two = 2;
			}

			if(count == 2) {
				pandan = 1;\
			}
		}

		if(pandan == 0) {
			if(s[0][2] == namgyu) count++;
			else if(s[0][2] == '-') {
				one = 0;
				two = 2;
			}
			if(s[1][1] == namgyu) count++;
			else if(s[1][1] == '-') {
				one = 1;
				two = 1;
			}
			if(s[2][0] == namgyu) count++;
			else if(s[2][0] == '-') {
				one = 2;
				two = 0;
			}

			if(count == 2) {
				pandan = 1;\
			}
		}

		s[one][two] = namgyu;

		printf("Case %d:\n", cas);
		cas++;

		for(int j = 0; j < 3; j++) {
			for(int k = 0; k < 3; k++) {
				cout << s[j][k];
			}
			cout << '\n';
		}

	}
}
