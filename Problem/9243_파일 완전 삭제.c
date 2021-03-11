#include <stdio.h>
#include <string.h>

main()
{
	int n;
	char s[1000];
	char s2[1000];
	int i, j;
	int pandan=0;

	scanf("%d", &n);

	scanf("%s", s);
	scanf("%s", s2);

	printf("Deletion ");

	if(n%2==0)
	{
		for(i=0; i<strlen(s); i++)
		{
			if(s[i] != s2[i])
			{
				printf("failed\n");
				pandan++;
				break;
			}
		}
		if(pandan==0) printf("succeeded\n");
	}
	else
	{
		for(i=0; i<strlen(s2); i++)
		{
			if(s[i] == s2[i])
			{
				printf("failed\n");
				pandan++;
				break;
			}
		}
		if(pandan==0) printf("succeeded\n");
	}
}
