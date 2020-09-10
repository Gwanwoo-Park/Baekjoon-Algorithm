#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

main()
{
	int t;
	int i;
	int j, k;
	int g[6];
	int s[7];
	int gsum=0;
	int ssum=0;
	int count=0;

	scanf("%d", &t);

	for(i=0; i<t; i++)
	{
		count++;
		for(j=0; j<6; j++)
		{
			scanf("%d", &g[j]);
		}
		for(j=0; j<7; j++)
		{
			scanf("%d", &s[j]);
		}
		gsum += g[0] + g[1]*2+g[2]*3+g[3]*3+g[4]*4+g[5]*10;
		ssum += s[0] + s[1]*2+s[2]*2+s[3]*2+s[4]*3+s[5]*5+s[6]*10;

		printf("Battle %d: ", count);
		if(gsum>ssum) printf("Good triumphs over Evil\n");
		else if(gsum<ssum) printf("Evil eradicates all trace of Good\n");
		else printf("No victor on this battle field\n");

		ssum=0;
		gsum=0;
	}
}
