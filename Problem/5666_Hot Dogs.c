#include <stdio.h>

main()
{	
	float a=0.0, b=0.0;

	while(~scanf("%f %f", &a, &b))
	{
		printf("%.2f\n", (float)a/(float)b);
	}
}
