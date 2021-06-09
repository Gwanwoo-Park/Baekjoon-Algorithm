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
	while(1) {
		
		start:

		int n;
		int sum = 0;
		int arr[150000] = {0, };
		int top = -1;

		cin >> n;

		if (n == -1) break;

		for(int i = 1; i < n; i++) {
			if (n % i == 0) {
				sum += i;
				top++;
				arr[top] = i;
			}
			if (sum > n) { 
				cout << n << " is NOT perfect.\n";
				goto start;
			}
		}
		if (sum == n) {
			printf("%d = ", n);
			for(int i = 0; i < top + 1; i++) {
				printf("%d ", arr[i]);
				if (i != top) printf("+ ");
			}
			printf("\n");
		} else cout << n << " is NOT perfect.\n";
	}
}
