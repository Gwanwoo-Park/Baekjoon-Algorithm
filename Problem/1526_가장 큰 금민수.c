#include <stdio.h>
#include <string.h>

main()
{
	int n;
	int i, j;
	int pandan=0;
	char s[10];

	scanf("%d", &n);

	for(i=n; i>0; i--)
	{
		sprintf(s, "%d", i);

		for(j=0; s[j] != '\0'; j++)
		{
			if(s[j] != '4' && s[j] != '7')
			{
				pandan++;
				continue;
			}
		}
		if(pandan>0)
		{
			pandan=0;
			continue;
		}
		else
		{
			printf("%s\n", s);
			break;
		}
	}
}