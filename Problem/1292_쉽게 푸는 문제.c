#include <stdio.h>
#include <string.h>

main()
{
	int a, b;
	int i, j;
	int p=1;
	int plus=0;
	int pandan=0;
	int arr[1100] = {0};
	int sum=0;

	scanf("%d %d", &a, &b);

	for(i=0; ; i++)
	{
		for(j=0; j<p; j++)
		{
			arr[plus] = p;
			plus++;
			pandan++;
		}
		p++;
		if(pandan >= b) break;
	}
	for(i=a-1; i<b; i++)
	{
		sum = sum + arr[i];
	}
	printf("%d\n", sum);
}