#include <stdio.h>

main()
{
	int c;
	int n;
	int i, j;
	float a[1001];
	float sum=0;
	float ave;
	int fin=0;
	float bi;

	scanf("%d", &c);

	for(i=0; i<c; i++)
	{
		scanf("%d", &n);

		sum = 0;
		fin = 0;

		for(j=0; j<n; j++)
		{
			scanf("%f", &a[j]);
			
			sum = sum + a[j];
		}

		ave = (double)sum/n;

		for(j=0; j<n; j++)
		{
			if(a[j] > ave)
			{
				fin++;
			}
		}
		
		bi = (double)fin/n*100;

		printf("%.3f%%\n", bi);
	}
}
