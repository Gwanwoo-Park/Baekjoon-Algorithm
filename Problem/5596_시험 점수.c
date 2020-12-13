#include <stdio.h>

main()
{
	int s[4] = {0}, t[4] = {0};
	int i;
	int sum1 = 0, sum2 = 0;

	for(i=0; i<4; i++) 
	{
		scanf("%d", &s[i]);

		sum1 = sum1 + s[i];
	}
	for(i=0; i<4; i++)
	{
		scanf("%d", &t[i]);

		sum2 = sum2 + t[i];
	}
	if(sum2>sum1) printf("%d\n", sum2);
	else printf("%d\n", sum1);
}
