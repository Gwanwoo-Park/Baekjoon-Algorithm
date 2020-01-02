#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main()
{
	int a, b, n;
	int compare = 0;
	int pandan = 0;

	scanf("%d %d %d", &a, &b, &n);

	while(n > 0)
	{
		a = a%b;
		
		if(a == 0)
		{
			pandan++;
			printf("0\n");
			break;
		}

		a *= 10;
		n--;
	}
	if(pandan == 0) printf("%d\n", a/b);
}