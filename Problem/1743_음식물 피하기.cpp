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

int n, m, k;
int arr[100][100] = {0, };
int visited[100][100] = {0, };
int max = 0;
int count = 0;
int maxValue = 0;

int dx[4] = {0, -1, 0, 1};
int dy[4] = {-1, 0, 1, 0};

void dfs(int x, int y) {
	for(int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;

		if (arr[nx][ny] && !visited[nx][ny]) {
			::count++;
			visited[nx][ny]++;
			dfs(nx, ny);
		}
	}
}

int main(){
	scanf("%d %d %d", &n, &m, &k);

	int r, c;

	for(int i = 0; i < k; i++) {
		scanf("%d %d", &r, &c);

		arr[--r][--c]++;
	}

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if (arr[i][j] && !visited[i][j]) {
				::count++;
				visited[i][j]++;
				dfs(i, j);
			}

			if (maxValue < ::count) {
				maxValue = ::count;
			}
			::count = 0;
		}
	}

	printf("%d\n", maxValue);
}