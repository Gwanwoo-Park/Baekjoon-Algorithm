#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main()
{
	int a, b, v;

	scanf("%d %d %d", &a, &b, &v);

	printf("%d\n", (v-b-1)/(a-b)+1);
}
