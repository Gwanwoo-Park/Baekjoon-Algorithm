#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

main()
{
	char s[50];
	char imsi[50];
	int i,j;
	int  tmp=4;
	int sum=0;
	int n, k;

	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		scanf("%s", s);

		for(k=0,j=2; j>=0; j--, k++)
		{
			sum = sum + ((s[k]-'A')*pow(26.0, j));
		}
		
		for(j=0; j<4; j++)
		{
			imsi[j] = s[tmp];
			tmp++;
		}
		tmp = atoi(imsi);

		if(abs(sum - tmp) <= 100)
		{
			printf("nice\n");
		}
		else printf("not nice\n");

		tmp=4;
		sum=0;
	}
}