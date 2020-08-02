#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main()
{
	int a, b, c;
	int arr[101] = {0, };
	int i, j;
	int start, finish;
	int fare = 0;

	scanf("%d %d %d", &a, &b, &c);

	for(i=0; i<3; i++)
	{
		scanf("%d %d", &start, &finish);

		for(j=start; j<finish; j++)
		{
			arr[j]++;
		}
	}

	for(i=0; i<100; i++)
	{
		if(arr[i] == 1) fare += a;
		else if(arr[i] == 2) fare = fare + (b * 2);
		else if(arr[i] == 3) fare = fare + (c * 3);
	}
	printf("%d\n", fare);
}
