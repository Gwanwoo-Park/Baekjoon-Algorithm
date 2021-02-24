#include <stdio.h>
#include <string.h>

main()
{
	char s[100];
	int i, j;
	int t;
	int sum=0;
	int plus=1;

	scanf("%d", &t);

	for(i=0; i<t; i++)
	{
		sum = 0;
		plus = 1;

		scanf("%s", &s);

		for(j=0; s[j] != '\0'; j++)
		{
			if(s[j] == 'O')
			{
				sum = sum + plus;
				plus++;
			}
			if(s[j] == 'X')
			{
				plus = 1;
			}
		}
			printf("%d\n", sum);
	}
}
