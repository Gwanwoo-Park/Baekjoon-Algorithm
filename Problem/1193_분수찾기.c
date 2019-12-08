#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

main()
{
	int n;
	int i, j;
	int bunza=0, bunmo=0;
	int pandan=0;
	int top=0;
	int here1=0;
	int here2=0;

	scanf("%d", &n);

	while(1)
	{
		top++;
		here1=0;
		here2=0;

		if(top%2==0)
		{
			bunza=1;
			bunmo=top;
			here1++;
		}
		else
		{
			bunza=top;
			bunmo=1;
			here2++;
		}
		
		for(i=0; i<top; i++)
		{
			pandan++;
			if(pandan==n) break;
			if(here1>0)
			{
				bunmo--;
				bunza++;
			}
			else
			{
				bunmo++;
				bunza--;
			}
		}
		if(pandan==n) break;
	}
	printf("%d/%d\n", bunza, bunmo);
}
