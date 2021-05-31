#include <stdio.h>
#include <string.h>

main()
{
	char s[10000] = {'\0'};
	char name[10000];
	int t, i, j;
	int b=0, c=0, m=0, w=0;
	int max=0, overlap=0;
	int pandan=0;

	scanf("%d", &t);

	for(i=0; i<t; i++)
	{
		scanf("%s", name);

		scanf("%s", s);

		b=0; c=0; m=0; w=0;
		max=0; pandan=0;

		for(j=0; s[j] != '\0'; j++)
		{
			if(s[j] == 'B') b=b+2;
			else if(s[j] == 'C') c++;
			else if(s[j] == 'M') m=m+4;
			else w=w+3;
		}
		/*
		if(b==c || b==m || b==w || c==m || c==w || m==w)
		{
		printf("%s: There is no dominant species\n", name);
		}
		*/

		if(b >= max)
		{
			max = b;
		}
		if(c >= max)
		{
			if(c==max) pandan++;
			max = c;
		}
		if(m >= max)
		{
			if(m==max) pandan++;
			max = m;
		}
		if(w >= max)
		{
			if(w==max) pandan++;
			max = w;
		}

		if(pandan > 0)
		{
			printf("%s: There is no dominant species\n", name);
		}
		else
		{
		printf("%s: The ", name);
		if(max == b)
		{
			printf("Bobcat ");
		}
		else if(max == c)
		{
			printf("Coyote ");
		}
		else if(max == m)
		{
			printf("Mountain Lion ");
		}
		else
		{
			printf("Wolf ");
		}
		printf("is the dominant species\n");
		}
	}
}
