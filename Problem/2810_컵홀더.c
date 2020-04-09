#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main()
{
	char s[51];
	int n;
	int i = 0;
	int length;
	int cup = 0;

	scanf("%d", &n);

	scanf("%s", s);

	length = strlen(s);

	while(1)
	{
		if(s[i] == 'S')
		{
			i++;
			cup++;
		}
		else if(s[i] == 'L')
		{
			i += 2;
			cup++;
		}

		if(i >= length) break;
	}
	if(length <= cup) printf("%d\n", length);
	else printf("%d\n", cup+1);
}
