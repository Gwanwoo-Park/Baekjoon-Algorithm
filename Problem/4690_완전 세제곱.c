#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main()
{
	int i, j, k, m;

	for(i=2; i<=100; i++)
	{
		for(j=2; j<100; j++)
		{
			if(i <= j) break;

			for(k=3; k<100; k++)
			{
				if(i <= k) break;
				if(j >= k) continue;

				for(m=4; m<100; m++)
				{
					if(i <= m) break;
					if(k >= m) continue;

					if(pow(i, 3.0) == pow(j, 3.0) + pow(k, 3.0) + pow(m, 3.0))
					{
						printf("Cube = %d, Triple = (%d,%d,%d)\n", i, j, k, m);
					}
				}
			}
		}
	}
}
