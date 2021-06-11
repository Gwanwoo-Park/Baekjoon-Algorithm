#include<stdio.h>
#include<math.h>

main()
{
	int t;
	int h, w, n;
	int i, j, k;
	int a, b, c;

	scanf("%d", &t);

	for(i=0; i<t; i++)
	{
		scanf("%d %d %d", &h, &w, &n);
		
		if(n%h == 0)
		{
			printf("%d\n", h*100 + n/h);
		}
		else 
		printf("%d\n", n%h*100 + (n/h+1));
	}
}
