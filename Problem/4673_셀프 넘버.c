#include <stdio.h>
#include <math.h>

main()
{
	int arr[10000] = {0};
	int n, dn;
	int i;

	for(i=1; i<=10000; i++)
	{
		n = i;
		dn = n;
		while(n != 0)
		{
			dn = dn + (n%10);
			n = n/10;
		}
		if(dn <= 10000)
		{
			arr[dn]++;
		}
	}
	for(i=1; i<=10000; i++)
	{
		if(arr[i] ==0)
		{
			printf("%d\n", i);
		}
	}
}
