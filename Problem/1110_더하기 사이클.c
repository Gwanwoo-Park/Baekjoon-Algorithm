#include <stdio.h>

main()
{
	int n;
	int a, b;
	int sum=0;

	scanf("%d", &n);

	b = n;

	while(1)
	{
		if(n==0) sum = 1;
		if(n==0) break;

		a = b/10 + b%10;
		if(a>=10)
		{
			b = b%10*10 + a%10;
		}
		else 
		{
			b = b%10*10 + a; 
		}

		sum++;
		if(b==n) break;
	}
	printf("%d\n", sum);
}