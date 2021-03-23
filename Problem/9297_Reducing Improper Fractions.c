#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main()
{
	int t;
	int i;
	int count = 0;
	int bunza, bunmo;
	int num;

	scanf("%d", &t);

	for(i=0; i<t; i++)
	{
		count++;

		scanf("%d %d", &bunza, &bunmo);

		printf("Case %d: ", count);

		if(bunza / bunmo > 0)
		{
			num = bunza / bunmo;
			bunza = bunza - (bunmo * num);
		}

		if(num == 0 && bunza == 0) printf("0");
		else
		{
			if(num > 0) printf("%d ", num);
			if(bunza > 0) printf("%d/%d", bunza, bunmo);
		}
		printf("\n");
		
		num = 0;
		bunza = 0;
		bunmo = 0;
	}
}
