#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int factorial(int n)
{
	int sum = 1;
	int i;
	for (i = n; i >= 2; i--)
	{
		sum = sum * i;
	}
	return sum;
}

main()
{
	char s[5];

	int sum = 0;
	int sLength=0;
	int i, j;

	while (1)
	{
		scanf("%s", s);

		for(i=0; s[i] != '\0'; i++)
		{
			sLength++;
		}

		if (s[0] == '0') break;
		
		j=1;

		for (i = sLength - 1; i >= 0; i--, j++)
		{
			sum = sum + ((s[i] - '0') * factorial(j));
		}
		printf("%d\n", sum);
		sum = 0;
		sLength=0;
	}
}
