#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

main()
{
	int a1, a2, a3;
	int b1, b2, b3;
	int c1, c2, c3;
	int h, m, s;
	int pandan=0;

	scanf("%d:%d:%d %d:%d:%d", &a1, &a2, &a3, &b1, &b2, &b3);

	c1 = a1 * 3600 + a2 * 60 + a3;
	c2 = b1 * 3600 + b2 * 60 + b3;

	if(c2 >= c1)
	{
		c1 = c2 - c1;
	}
	else
	{
		pandan++;
		c1 = 86400 - (c1 - c2);
	}

	h = c1 / 3600;
	m = (c1 - h*3600) / 60;
	s = c1 - (h*3600 + m*60);

	if(h < 10) printf("0");
	printf("%d:", h);
	if(m < 10) printf("0");
	printf("%d:", m);
	if(s < 10) printf("0");
	printf("%d\n", s);
	
}
