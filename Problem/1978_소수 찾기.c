#include <stdio.h>
#include <string.h>

main()
{
	int n;
	int i, j;
	int a[101];
	int sum=0;

	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);

		if(a[i] == 2) sum++;

		for(j=2; j<a[i]; j++)
		{

			if(a[i] % j == 0)
			{
				break;
			}
			else if(j == a[i]-1 && a[i] % j != 0)
			{
				sum++;
				break;
			}
		}
	}
	printf("%d\n", sum);
}
