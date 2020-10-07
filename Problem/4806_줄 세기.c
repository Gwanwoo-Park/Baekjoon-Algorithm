#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main()
{
	char s;
	int i;
	int num = 0;

	while(scanf("%c", &s) != EOF)
	{
		if(s == '\n') num++;
	}
	printf("%d\n", num);
}
