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
	int n, c;
	int sum = 0;
	int arr[100] = {0, };

	cin >> n >> c;

	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for(int i = 1; i <= c; i++) {
		for(int j = 0; j < n; j++) {
			if (i % arr[j] == 0) {
				sum++;
				break;
			}
		}
	}
	printf("%d\n", sum);
}