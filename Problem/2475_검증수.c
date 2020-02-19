#include <stdio.h>

main()
{
	int n[5], i;
	int a, b, c, d, e;
	int goyu;

	for(i=0; i<5; i++)
	{
		scanf("%d", &n[i]);
	}
	goyu = (n[0]*n[0] + n[1]*n[1] + n[2]*n[2] + n[3]*n[3] + n[4]*n[4])%10;
	printf("%d\n", goyu);
}
