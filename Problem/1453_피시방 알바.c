#include <stdio.h>
#include <string.h>

main()
{
	int n;
	int i, seat;
	int arr[101] = {0};
	int result=0;

	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		scanf("%d", &seat);

		arr[seat]++;

		if(arr[seat] > 1) result++;
	}
	printf("%d\n", result);
}