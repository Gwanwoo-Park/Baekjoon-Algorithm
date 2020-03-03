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


int arr[100][100] = {0, };
int visited[100][100] = {0, };

int dx[4] = { 0, -1, 0, 1 };
int dy[4] = { -1, 0, 1, 0 };

int m, n, k;
int result[100] = {0, };
int index11 = 0;


void dfs(int x, int y) {
	
	for(int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if(nx < 0 || nx >= m || ny < 0 || ny >= n) continue;

		if(arr[nx][ny] == 0 && !visited[nx][ny]) {
			result[index11]++;
			visited[nx][ny]++;
			dfs(nx, ny);
		}
	}
}

int main() {

	scanf("%d %d %d", &m, &n, &k);

	int x1, y1, x2, y2;

	for(int i = 0; i < k; i++) {
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

		for(int k = y1; k < y2; k++) {
			for(int j = x1; j < x2; j++) {
				if(arr[k][j] == 0) {
					arr[k][j]++;
				}
			}
		}
	}

	int pandan = 0;

	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			if(arr[i][j] == 0 && !visited[i][j]) {
				result[index11]++;
				visited[i][j]++;
				dfs(i, j);
				pandan++;
			}
			if(pandan > 0) {
				index11++;
				pandan = 0;
			}
		}
	}

	sort(result, result + index11);

	printf("%d\n", index11);

	for(int i = 0; i < index11; i++) {
		printf("%d ", result[i]);
	}
	printf("\n");
}
