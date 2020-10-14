#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
using namespace std;

int dx[8] = { -1, -1, -1, 0, 1, 1, 1, 0 };
int dy[8] = { -1, 0, 1, 1, 1, 0, -1, -1 };
int visited[50][50];
int arr[50][50];
int w, h;

void dfs(int x, int y) {
	
	for(int i = 0; i < 8; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if(nx < 0 || nx >= w || ny < 0 || ny >= h) continue;

		if(arr[nx][ny] && !visited[nx][ny]) {
			visited[nx][ny]++;
			dfs(nx, ny);
		}
	}
}

int main() {

	while(true) {
		cin >> h >> w;

		if(w == 0 && h == 0) break;

		int sum = 0;

		for(int i = 0; i < w; i++) {
			memset(arr[i], 0, sizeof(int)*h);
			memset(visited[i], 0, sizeof(int)*h);
		}

		for(int i = 0; i < w; i++) {
			for(int j = 0; j < h; j++) {
				cin >> arr[i][j];
			}
		}

		for(int i = 0; i < w; i++) {
			for(int j = 0; j < h; j++) {
				if(arr[i][j] && visited[i][j] == 0) {
					sum++;
					dfs(i, j);
					visited[i][j]++;
				}
			}
		}
		cout << sum << '\n';
	}
}
