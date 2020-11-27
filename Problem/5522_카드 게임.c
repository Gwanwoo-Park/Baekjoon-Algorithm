#define _CRT_SEUCRE_NO_WARNINGS
#include <stdio.h>

main()
{
	int s[5];
	int i, sum=0;

	for(i=1; i<=5; i++)
	{
		scanf("%d", &s[i]);
		sum = sum + s[i];
	}
	printf("%d", sum);
}
