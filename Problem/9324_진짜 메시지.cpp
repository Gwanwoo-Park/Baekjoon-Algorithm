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

int main() {
	
	int t;

	char s[100001];

	cin >> t;

	for(int i = 0; i < t; i++) {
		cin >> s;

		bool flag = true;
		int len = strlen(s);
		int arr[26] = {0, };
		int index = 1;

		for(int j = 0; j < len; j += index) {
			index = 1;

			arr[s[j] - 'A']++;
			
			if(arr[s[j] - 'A'] == 3) {
				if(s[j] != s[j + 1]) {
					flag = false;
					break;
				}
				index = 2;
				arr[s[j] - 'A'] = 0;
			}
		}

		if(flag) printf("OK\n");
		else printf("FAKE\n");
	}
}
