#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j;
	int arr[9][9];
	int max=0;
	int x,y;

	for(i=0; i<9; i++)
	{
		for(j=0; j<9; j++)
		{
			scanf("%d", &arr[i][j]);
			
			if(arr[i][j]>max)
			{
				max=arr[i][j];
				x=i+1;
				y=j+1;
			}
		}
	}
	printf("%d\n", max);
	printf("%d %d", x,y);
}
