#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	int i;
	int sum=0;

	scanf("%d", &n);

	for(i=0; i<=n; i++)
	{
		sum = sum + i;
	}
	printf("%d", sum);
}
