#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

main()
{
	int n;
	int i;
	int arr[101] = {0};
	int sum=0;

	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for(i=n-1; i>0; i--)
	{
		if(arr[i] <= arr[i-1])
		{
			sum += arr[i - 1] - arr[i] + 1;
			arr[i - 1] = arr[i - 1] - (arr[i - 1] - arr[i] + 1);
		}
	}
	printf("%d\n", sum);
}
