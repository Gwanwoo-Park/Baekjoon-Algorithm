#include <stdio.h>

main()
{
	int n;
	int i;
	int a[1000001]={0};
	int plus=0;
	int sum=0;

	scanf("%d", &n);

	a[0] = 1;

	for(i=1; ; i++)
	{
		a[i] = a[i-1] + plus;

		plus = plus + 6;

		sum++;

		if(a[i]>=n) break;
	}
	printf("%d\n", sum);
}
