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
	int n;

	cin >> n;

	int result = 0;

	for(int i = 1; i <= n; i++) {
		for(int j = i; j <= n; j++) {
			if(i * j > n) {
				break;
			}
			result++;
		}
	}
	cout << result << '\n';
}
