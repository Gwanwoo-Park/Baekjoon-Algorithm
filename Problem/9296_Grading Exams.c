#include <stdio.h>
#include <string.h>

main()
{
	char a[1000], b[1000];
	int t, length;
	int i, j;
	int sum = 0;
	int num = 0;

	scanf("%d", &t);

	for(i=0; i<t; i++)
	{
		sum = 0;
		num++;

		scanf("%d", &length);
		scanf("%s %s", a, b);

		for(j=0; j<length; j++)
		{
			if(a[j] != b[j]) sum++;
		}
		printf("Case %d: %d\n", num, sum);
	}
}
