#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

main()
{
	int n;
	int i;
	int sum=0;
	int plug;

	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		scanf("%d", &plug);

		sum += plug;
	}
	printf("%d\n", sum - n + 1);
}
