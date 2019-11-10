#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main()
{
	int n, f;
	int i;

	scanf("%d %d", &n, &f);

	n = n / 100;
	n *= 100;

	for(i=n; ; i++)
	{
		if(i % f == 0) break;
	}

	n = i % 100;

	if(n < 10) printf("0");
	printf("%d\n", n);
}