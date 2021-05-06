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
	string s;
	string a;

	while(1) {
		getline(cin, a);

		if (a == "ENDOFINPUT") break;

		getline(cin, s);

		int length = s.length();

		for(int i = 0; i < length; i++) {
			if (s[i] >= 'A' && s[i] <= 'Z') {
				if (s[i] - 5 < 'A') {
					s[i] = 'Z' - (5 - (s[i] - 'A')) + 1; 
				} else {
					s[i] = s[i] - 5;
				}
			}
		}

		getline(cin, a);

		cout << s << '\n';
	}
}
