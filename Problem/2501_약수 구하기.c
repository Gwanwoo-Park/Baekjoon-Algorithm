#include <stdio.h>

main()
{
	int n, k;
	int k1=0;
	int i, j;


	scanf("%d %d", &n, &k);

	for(i=1; i<=n; i++)
	{
		if(n%i == 0)
		{
			k1++;

			if(k==k1) 
			{
				printf("%d\n", i);

				break;
			}
		}
	}
	if(i==n+1) printf("0\n");
}
