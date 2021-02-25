#include <stdio.h>
#include <string.h>

main()
{
	int arr[1000];
	int a, b;
	int i, j;
	int sum=0;
	int pandan=0;
	int plus=1;

	scanf("%d %d", &a, &b);

	for(i=0; i<b; i++)
	{
		if(pandan==plus)
		{
			plus++;
			pandan=0;
		}
		arr[i] = plus;
		pandan++;
	}
	for(i=a-1; i<b; i++)
	{
		sum += arr[i];
	}
	printf("%d\n", sum);
}
