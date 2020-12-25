#include <stdio.h>
#include <math.h>

main()
{	
	char s[201];
	int i, j;
	int pan=0;

	while(1)
	{
		int a[26] = {0};
		pan=0;

		scanf("%[^\n]%*c", s);

		if(s[0] == '*') break;

		for(i=0; s[i] != '\0'; i++)
		{
			if(s[i] != ' ')
			{
				a[s[i]-97]++;
			}
		}
		for(i=0; i<26; i++)
		{
			if(a[i] == 0)
			{
				printf("N\n");
				pan++;
				break;
			}
		}
		if(pan == 0)
		{
			printf("Y\n");
		}
	}
}
