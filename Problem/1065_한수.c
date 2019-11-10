#include <stdio.h>

main()
{
	int n;
	int i, j;
	char s[100];
	int sum=0;
	int a, b, c;

	scanf("%d", &n);

	for(i=1; i<=n; i++)
	{
		if(i<=99)
		{
			sum++;
			continue;
		}
		if(i==1000) break;
		
		sprintf(s, "%d", i);

		if(s[0] - s[1] == s[1] - s[2])
		{
			sum++;
		}
		
	}
	printf("%d\n", sum);
}