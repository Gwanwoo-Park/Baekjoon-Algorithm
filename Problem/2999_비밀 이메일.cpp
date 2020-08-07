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
	char s[101];

	scanf("%s", s);

	int len = strlen(s);

	int arr[100] = { 0, };
	int visited[100] = { 0, };
	int top = 0;
	int r = 0;
	int c = 0;

	for (int i = 1; i <= len; i++) {
		if (len % i == 0) {
			if (len / i == i) {
				r = i;
				c = i;
				break;
			}
			else if(len / i < i) {
				r = arr[top - 1];
				c = i;
				break;
			}

			arr[top] = i;
			top++;
		}
	}

	int gizun = -1;

	while (1) {
		gizun++;
		if (!visited[gizun]) {
			for (int i = gizun; i < len; i += r) {
				cout << s[i];
				visited[i]++;
			}
		}
		else break;
	}
	cout << '\n';
}
