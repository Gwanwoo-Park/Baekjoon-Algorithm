#include <iostream>
#include <string.h>
using namespace std;

int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };
char s[105][105];
int visited[105][105];
int enemy[105][105];
int n, m;
int wSum = 0;
int bSum = 0;

void dfs(int x, int y)
{
	for(int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];

		if(nx < 0 || nx >= m || ny < 0 || ny >= n) continue;

		if(s[nx][ny] == 'W' && !visited[nx][ny])
		{
			visited[nx][ny]++;
			wSum++;
			dfs(nx,ny);
		}
	}
}

void dfs2(int x, int y)
{
	for(int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];

		if(nx < 0 || nx >= m || ny < 0 || ny >= n) continue;

		if(s[nx][ny] == 'B' && !visited[nx][ny])
		{
			visited[nx][ny]++;
			bSum++;
			dfs2(nx,ny);
		}
	}
}

int main()
{
	cin >> n >> m;

	for(int i = 0; i < m; i++)
	{
		cin >> s[i];
	}

	memset(visited, 0, sizeof(visited));

	int sum = 0;

	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(s[i][j] == 'W' && !visited[i][j])
			{
				visited[i][j]++;
				wSum++;
				dfs(i, j);
			}
			sum += wSum*wSum;
			wSum = 0;
		}
	}
	cout << sum << ' ';

	memset(visited, 0, sizeof(visited));

	sum = 0;

	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(s[i][j] == 'B' && !visited[i][j])
			{
				visited[i][j]++;
				bSum++;
				dfs2(i, j);
			}
			sum += bSum*bSum;
			bSum = 0;
		}
	}
	cout << sum << endl;
}