#include <stdio.h>
#include <string.h>
#include <stdlib.h>

main()
{
	int n;
	int i, j;
	char a[100000];
	int c;
	int num;

	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		scanf("%s", a);

		c = strlen(a)-1;

		if(a[c] == '1' || a[c] == '3' || a[c] == '5' || a[c] == '7' || a[c] == '9')
		{
			printf("odd\n");
		}
		else printf("even\n");
	}
}
