#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

main()
{
	int a, b;
	int i, j;
	int r=1;
	int tmp;
	int t;
	int LCM;

	scanf("%d", &t);

	for(i=0; i<t; i++)
	{
		scanf("%d %d", &a, &b);

		LCM = a*b;

		if(a<b)
		{
			tmp = a;
			a = b;
			b = tmp;
		}
		
		while(r>0)
		{
			r = a%b;
			a = b;
			b = r;
		}
		LCM = LCM/a;
		
		printf("%d %d\n", LCM, a);

		r=1;
	}
}
