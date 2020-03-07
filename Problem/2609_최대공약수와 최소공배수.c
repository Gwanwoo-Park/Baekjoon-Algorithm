#include<stdio.h>
#include<math.h>

main()
{
	int a, b;
	int i, j;
	int min;
	long long int fin, fin2;

	scanf("%d %d", &a, &b);

	if(a>b) min = b;
	else min = a;

	for(i=1; i<=min; i++)
	{
		if(a%i == 0 && b%i == 0) fin = i;
	}
	fin2 = fin * a/fin * b/fin;

	printf("%lld\n%lld\n", fin, fin2);
}
