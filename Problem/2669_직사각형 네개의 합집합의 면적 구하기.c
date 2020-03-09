#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[101][101];
	int x1,y1, x2, y2;
	int i,j,k;
	int sum=0;
	
	for(i=0; i<101; i++)
	{
		for(j=0; j<101; j++)
		{
			arr[i][j] = 0;
		}
	}

	for(k=0; k<4; k++)
	{
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		for(i=x1; i<x2; i++)
		{
			for(j=y1; j<y2; j++)
			{
				arr[i][j] = 1;
			}
		}
	}
	for(i=0; i<101; i++)
	{
		for(j=0; j<101; j++)
		{
			sum = sum + arr[i][j];
		}
	}
	printf("%d", sum);
}
