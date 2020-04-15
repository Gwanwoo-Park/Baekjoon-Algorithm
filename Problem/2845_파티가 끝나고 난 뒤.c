#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

main()
{
	int l, p;
	int i;
	int arr[5];

	scanf("%d %d", &l, &p);

	for(i=0; i<5; i++)
	{
		scanf("%d", &arr[i]);
	}

	for(i=0; i<5; i++)
	{
		printf("%d ", arr[i] - (l*p));
	}
	printf("\n");
}
