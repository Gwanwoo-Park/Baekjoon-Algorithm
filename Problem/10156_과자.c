#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main()
{
	int k, n, m;

	scanf("%d %d %d", &k, &n, &m);

	if(k * n - m > 0) printf("%d\n", k * n - m);
	else printf("0\n");
}
