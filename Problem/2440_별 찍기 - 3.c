#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	int i, j;

	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		for(j=i; j<n; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
