#define _USE_MATH_DEFINES
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <stdio.h>
#include <cstdlib>
#include <bitset>
using namespace std;

char* reverse_string(char* tmp) {
	int len = strlen(tmp);

	char *result = new char[len];
	for(int i = len - 1, j = 0; i >= 0; i--, j++) {
		result[j] = tmp[i];
	}
	result[len] = NULL;

	return result;
}

int main() {
	int n;
	char tmp[41];
	char *s;

	while(1) {
		cin >> n;

		if(n == 0) break;

		cin >> tmp;

		s = reverse_string(tmp);

		int len = strlen(s);

		for(int i = 0; i < len; i++) {

			if(s[i] == '.' && n == 27) {
				s[i] = '_';
				continue;
			}
			if(s[i] >= 'A' && s[i] <= 'Z') {
				s[i] = s[i] + n;
			
				if(s[i] > 'Z') {
					if(s[i] - 'Z' == 1) {
						s[i] = '_';
					} else if(s[i] - 'Z' == 2) {
						s[i] = '.';
					} else {
						s[i] = ('A' - 3) + (s[i] - 'Z');
					}
				}
			} else {
				if(s[i] == '_') {
					if(n == 1) {
						s[i] = '.';
					} else {
						s[i] = ('A' - 2) + n;
					}
				} else {
					s[i] = ('A' - 1) + n;
				}
			}
		}
		printf("%s\n", s);
	}
}
