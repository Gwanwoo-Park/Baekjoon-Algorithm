#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

main()
{
	int n;
	int i;
	int arr[16] = {0};

	scanf("%d", &n);

	arr[0] = 2;

	for(i=1; i<16; i++)
	{
		arr[i] = arr[i-1] * 2 - 1;
	}
	printf("%d\n", arr[n]*arr[n]);
}
