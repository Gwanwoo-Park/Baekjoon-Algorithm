#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main()
{
	int m, n;
	char s[50][50];
	int i, j, k, o;
	int sum = 0;
	char compare = 'B';
	int pandan = 0;
	int min = 10000;
	
	scanf("%d %d", &m, &n);

	for(i = 0; i < m; i++)
	{
		scanf("%s", s[i]);
	}

	for(i = 0; i <= m - 8; i++)
	{
		for(j = 0; j <= n - 8; j++)
		{
			compare = 'B';
			for(k = i; k < i + 8; k++)
			{
				for(o = j; o < j + 8; o++)
				{
					if(compare != s[k][o]) sum++;

					if(compare == 'B') compare = 'W';
					else compare = 'B';
				}
				if(compare == 'B') compare = 'W';
				else compare = 'B';
			}
			if(sum < min) min = sum;
			sum = 0;
			compare = 'W';
			for(k = i; k < i + 8; k++)
			{
				for(o = j; o < j + 8; o++)
				{
					if(compare != s[k][o]) sum++;

					if(compare == 'B') compare = 'W';
					else compare = 'B';
				}
				if(compare == 'B') compare = 'W';
				else compare = 'B';
			}
			if(sum < min) min = sum;
			sum = 0;
		}
	}
	printf("%d\n", min);
}