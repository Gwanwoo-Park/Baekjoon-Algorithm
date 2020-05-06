#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

main()
{
	int h, m;

	scanf("%d  %d", &h, &m);

	if(m-45 < 0)
	{
		if(h-1 < 0)
		{
			h = 23;
		}
		else
		{
			h--;
		}
		m = 60 - abs(m-45);

		printf("%d %d\n", h, m);
	}
	else
	{
		printf("%d %d\n", h, m-45);
	}
}
