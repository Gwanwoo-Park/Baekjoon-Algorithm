#include<stdio.h>
#include<math.h>

main()
{
	int n;
	int i, j;
	int a[50];
	int max=0;
	int min=1000000;

	scanf("%d", &n);

	for(i=0; i<n; i++) scanf("%d", &a[i]);

	for(i=0; i<n; i++)
	{
		if(max < a[i])
		{
			max = a[i];
		}
		if(min >= a[i])
		{
			min = a[i];
		}
	}
	printf("%d\n", max*min);
}