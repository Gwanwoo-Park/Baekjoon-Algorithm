#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };
char s[30][30];
int visited[30][30];
int sum = 0;
int n;
int sumArray[10000] = {0, };
int ind = 0;

void dfs(int x, int y) {
	
	for(int i = 0; i < 4; i++) {
		
		int nx = x + dx[i];
		int ny = y + dy[i];

		if(nx < 0 || nx >= n || ny < 0 || ny >= n) continue;

		if(s[nx][ny] == '1' && !visited[nx][ny]) {
			visited[nx][ny]++;
			sum++;
			dfs(nx, ny);
		}
	}
}

int main()
{


	cin >> n;

	for(int i = 0; i < n; i++)
	{
		cin >> s[i];
	}

	memset(visited, 0, sizeof(visited));

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(s[i][j] == '1' && !visited[i][j]) {
				visited[i][j]++;
				sum++;
				dfs(i, j);
				sumArray[ind] = sum;
				ind++;
				sum = 0;
			}
		}
	}

	cout << ind << '\n';

	sort(sumArray, sumArray + ind);

	for(int i = 0; i < ind; i++) cout << sumArray[i] << '\n';
}
