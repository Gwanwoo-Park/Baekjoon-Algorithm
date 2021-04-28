#include <stdio.h>
#include <string.h>
#include <math.h>
#include <malloc.h>
#include <stdlib.h>

main()
{
	int i, j;
	char a[1000];
	char b[1000];
	int aa[26] = {0};
	int bb[26] = {0};
	int pandan=0;
	int Case = 0;

	while(1)
	{
		scanf("%s", a);

		if(a[0] != 'E')
		{
			for(i=0; i<strlen(a); i++)
			{
				aa[a[i] - 'a']++;
			}
		}
		else
		{
			pandan++;
			if(pandan==2) break;
			continue;
		}

		pandan=0;

		scanf("%s", b);

		for(i=0; i<strlen(b); i++)
		{
			bb[b[i] - 'a']++;
		}
		Case++;

		printf("Case %d: ", Case);

		for(i=0; i<26; i++)
		{
			if(aa[i] != bb[i])
			{
				printf("different\n");
				pandan++;
				break;
			}
		}
		if(pandan == 0) printf("same\n");

		for(i=0; i<26; i++)
		{
			aa[i] = 0;
			bb[i] = 0;
		}
	}
}
