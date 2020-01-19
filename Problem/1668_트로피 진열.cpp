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

	scanf("%d", &n);

	int *arr = new int[n];

	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int max = arr[0];
	int sum = 1;

	for(int i = 1; i < n; i++) {
		if (max < arr[i]) {
			sum++;
			max = arr[i];
		}
	}
	printf("%d\n", sum);

	max = arr[n - 1], sum = 1;

	for(int i = n - 2; i >= 0; i--) {
		if (max < arr[i]) {
			sum++;
			max = arr[i];
		}
	}
	printf("%d\n", sum);
}