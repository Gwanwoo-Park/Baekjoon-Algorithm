#include <stdio.h>
#include <math.h>

main()
{
	int n;
	int i, j;
	double a[10001];
	double b[10001];
	double max;
	double sum=0;

	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		scanf("%lf", &a[i]);
	}
	i=0;
	max=a[i];
	for(i=1; i<n; i++)
	{
		if(max <= a[i]) max = a[i];
	}
	for(i=0; i<n; i++)
	{
		b[i] = a[i]/max*100;
		
		sum = sum + b[i];
	}
	printf("%.2lf\n", sum/n);
}