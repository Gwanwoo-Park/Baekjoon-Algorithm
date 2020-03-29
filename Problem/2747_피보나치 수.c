#include <stdio.h>

main()
{
	int arr[100] = {0};
	int i;
	int n;

	arr[0] = 0;
	arr[1] = 1;
	
	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		arr[i+2] = arr[i+1] + arr[i];
	}

	printf("%d\n", arr[n]);
}
