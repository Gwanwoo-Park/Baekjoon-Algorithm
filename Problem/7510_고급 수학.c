#include <stdio.h>
#include <math.h>

main()
{	
	int t;
	int i, j;
	int a, b, c;
	int max=0;
	int num=1;

	scanf("%d", &t);

	for(i=0; i<t; i++)
	{
		max=0;

		scanf("%d %d %d", &a, &b, &c);

		printf("Scenario #%d:\n", num);
		num++;

		if(a>max)
		{
			max = a;
		}
		if(b>=max)
		{
			max = b;
		}
		if(c>=max)
		{
			max = c;
		}

		if(max==a)
		{
			if((b*b)+(c*c)==a*a)
			{
				printf("yes\n\n");
			}
			else printf("no\n\n");
		}
		else if(max==b)
		{
			if((a*a)+(c*c)==b*b)
			{
				printf("yes\n\n");
			}
			else printf("no\n\n");
		}
		else if(max==c)
		{
			if((a*a)+(b*b)==c*c)
			{
				printf("yes\n\n");
			}
			else printf("no\n\n");
		}
	}
}
