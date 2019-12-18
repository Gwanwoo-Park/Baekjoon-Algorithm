#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

main()
{
	int a[40] = {0};
	int sum[81] = {0};
	int i, j, k;
	int s1, s2, s3;
	int max=0;
	int here;

	for(i=0; i<40; i++)
	{
		a[i] = i+1;
	}
	scanf("%d %d %d", &s1, &s2, &s3);

	for(i=0; i<s1; i++)
	{
		for(j=0; j<s2; j++)
		{
			for(k=0; k<s3; k++)
			{
				sum[a[i]+a[j]+a[k]]++;
			}
		}
	}
	for(i=0; i<81; i++)
	{
		if(max < sum[i])
		{
			max = sum[i];
			here = i;
		}
	}
	printf("%d\n", here);
}
