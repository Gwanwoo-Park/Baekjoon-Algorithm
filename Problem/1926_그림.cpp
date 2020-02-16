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

int dx[4] = {0, -1, 0, 1};
int dy[4] = {-1, 0, 1, 0};
int **visited;
int **arr;
int n, m;
int maxValue = 0;
int sum = 0;
int counter = 0;

void dfs(int x, int y) {
	for(int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;

		if (arr[nx][ny] && !visited[nx][ny]) {
			sum++;
			visited[nx][ny]++;
			dfs(nx, ny);
		}
	}
}

int main(){
	cin >> n >> m;

	arr = new int*[n];
	visited = new int*[n];
	for(int i = 0; i < n; i++) {
		arr[i] = new int[m];
		visited[i] = new int[m];
		memset(visited[i], 0, sizeof(int) * m);
	}

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if (arr[i][j] && !visited[i][j]) {
				sum++;
				counter++;
				visited[i][j]++;
				dfs(i, j);
			}
			if (maxValue < sum) {
				maxValue = sum;
			}
			sum = 0;
		}
	}
	printf("%d\n%d\n", counter, maxValue);
}