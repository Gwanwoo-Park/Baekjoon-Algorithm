#define _USE_MATH_DEFINES
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <stdio.h>
#include <cstdlib>
#include <bitset>
using namespace std;

int dx[4] = {0, -1, 0, 1};
int dy[4] = {-1, 0, 1, 0};
int visited[100][100] = {0, };
int n;
int result = 0;
char **arr;
bool blindness = false;
bool red = false;
bool green = false;
bool blue = false;

void dfs(int x, int y) {
	
	for(int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if(nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
		
		if(!blindness) {

			if(arr[nx][ny] == 'R' && !visited[nx][ny] && red) {
				visited[nx][ny]++;
				dfs(nx, ny);
			}
			else if(arr[nx][ny] == 'G' && !visited[nx][ny] && green) {
				visited[nx][ny]++;
				dfs(nx, ny);
			}
			else if(arr[nx][ny] == 'B' && !visited[nx][ny] && blue) {
				visited[nx][ny]++;
				dfs(nx, ny);
			}
		} else {
			if((arr[nx][ny] == 'R' || arr[nx][ny] == 'G') && !visited[nx][ny] && red && green) {
				visited[nx][ny]++;
				dfs(nx, ny);
			}
			if(arr[nx][ny] == 'B' && !visited[nx][ny] && blue) {
				visited[nx][ny]++;
				dfs(nx, ny);
			}
		}
	}
}

void array_Initialized() {
	for(int i = 0; i < n; ++i) { 
		memset(visited[i], 0, sizeof(int)*n);
	}
}

int main() {

	cin >> n;

	arr = new char*[n];
	for(int i = 0; i < n; i++) {
		arr[i] = new char[n];
	}

	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(arr[i][j] == 'R' && !visited[i][j]) {
				red = true;
				visited[i][j]++;
				result++;
				dfs(i, j);
			}
			red = false;
			if(arr[i][j] == 'G' && !visited[i][j]) {
				green = true;
				visited[i][j]++;
				result++;
				dfs(i, j);
			}
			green = false;
			if(arr[i][j] == 'B' && !visited[i][j]) {
				blue = true;
				visited[i][j]++;
				result++;
				dfs(i, j);
			}
			blue = false;
		}
	}

	array_Initialized();
	printf("%d ", result);

	///////////////////////
	result = 0;
	blindness = true;

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if((arr[i][j] == 'R' || arr[i][j] == 'G') && !visited[i][j]) {
				red = true;
				green = true;
				visited[i][j]++;
				result++;
				dfs(i, j);
			}
			red = false;
			green = false;

			if(arr[i][j] == 'B' && !visited[i][j]) {
				blue = true;
				result++;
				dfs(i, j);
			}
			blue = false;
		}
	}
	printf("%d\n", result);
	
}
