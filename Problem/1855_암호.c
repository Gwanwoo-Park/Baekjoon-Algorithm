#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main()
{
	int k;
	char s[100][21];
	char password[201];
	int i, j;
	int gps = 0;
	int gizun = 0;
	int pandan = 0;

	scanf("%d", &k);
	scanf("%s", password);

	for(i = 0; gps < strlen(password); i++)
	{
		if(pandan == 0)
		{
			for(j = 0; j < k; j++)
			{
				s[i][j] = password[gps];
				gps++;
			}
			pandan++;
		}
		else
		{
			for(j = k - 1; j >= 0; j--)
			{
				s[i][j] = password[gps];
				gps++;
			}
			pandan--;
		}
	}

	gizun = i;

	for(i = 0; i < k; i++)
	{
		for(j = 0; j < gizun; j++)
		{
			printf("%c", s[j][i]);
		}
	}
	printf("\n");
}