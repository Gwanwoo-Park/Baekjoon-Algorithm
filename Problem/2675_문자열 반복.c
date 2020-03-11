#include<stdio.h>
#include<string.h>

main()
{
	char s[10000];
	int i, j, k;
	int t, r;

	scanf("%d", &t);

	for(i=0; i<t; i++)
	{
		scanf("%d %s", &r, s);

		for(j=0; s[j] != '\0'; j++)
		{
			for(k=0; k<r; k++)
			{
				printf("%c", s[j]);
			}
		}
		printf("\n");
	}
}
