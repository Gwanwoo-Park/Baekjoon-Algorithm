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
	int arr[100][100] = {0, };
	
	arr[0][0] = 1;
	
	bool right = true;
	bool down = false;
	bool left = false;
	bool up = false;

	cin >> m >> n;

	int x = 0;
	int y = 0;
	int sum = 0;
	int compare = 1;

	while(1) {
		compare++;

		if(compare == m*n) break;
		if(right) {

			arr[x][++y]++;

			if(y == n - 1 || arr[x][y+1] == 1) {
				right = false;
				down = true;
				sum++;
			}
		} else if(down) {

			arr[++x][y]++;

			if(x == m - 1 || arr[x+1][y] == 1) {
				down = false;
				left = true;
				sum++;
			}
		} else if(left) {

			arr[x][--y]++;

			if(y == 0 || arr[x][y-1] == 1) {
				left = false;
				up = true;
				sum++;
			}
		} else if(up) {

			arr[--x][y]++;

			if(x == 0 || arr[x-1][y] == 1) {
				up = false;
				right = true;
				sum++;
			}
		}
		
	}

	printf("%d\n", sum);
}
