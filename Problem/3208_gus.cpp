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

	int visit[100][100] = { 0, };

	bool right = true;
	bool down = false;
	bool left = false;
	bool up = false;

	visit[0][0] = 1;

	int i = 0;
	int j = 0;

	scanf("%d %d", &m, &n);

	int count = 1;

	int sum = 0;

	while (1) {
		count++;

		if (count == m * n) break;

		if (right) {
			visit[i][++j]++;

			if (j + 1 >= n || visit[i][j + 1]) {
				right = false;
				down = true;
				sum++;
			}
		} else if (down) {
			visit[++i][j]++;


			if (i + 1 >= m || visit[i + 1][j]) {
				down = false;
				left = true;
				sum++;
			}
		} else if (left) {
			visit[i][--j]++;

			if (j <= 0 || visit[i][j - 1]) {
				left = false;
				up = true;
				sum++;
			}
		} else if (up) {
			visit[--i][j]++;

			if (i <= 0 || visit[i - 1][j]) {
				up = false;
				right = true;
				sum++;
			}
		}
	}
	cout << sum << '\n';
}
