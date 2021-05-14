#include <stdio.h>
#include <string.h>

main()
{
	char s[1000];
	int i, j;
	int t;
	int a=0, b=0;

	scanf("%d", &t);

	scanf("%s", s);

	for(i=0; i<t; i++)
	{
		if(s[i] == 'A') a++;
		else b++;
	}
	if(a>b) printf("A\n");
	else if(b>a) printf("B\n");
	else printf("Tie");
}
