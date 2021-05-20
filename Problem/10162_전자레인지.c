#include <stdio.h>
#include <string.h>
#include <math.h>
#include <malloc.h>
#include <stdlib.h>

main()
{
	int t;
	int i, j;
	int a=300, b=60, c=10;
	int abut=0, bbut=0, cbut=0;

	scanf("%d", &t);

	if(t >= a)
	{
		abut = t / a;
		t = t - (a * abut);
	}
	if(t >= b)
	{
		bbut = t / b;
		t = t - (b * bbut);
	}
	if(t >= c)
	{
		cbut = t / c;
		t = t - (c * cbut);
	}
	
	if(t == 0) printf("%d %d %d\n", abut, bbut, cbut);
	else printf("-1\n");
}
