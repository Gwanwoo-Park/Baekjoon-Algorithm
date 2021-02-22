#include <stdio.h>

main()
{
	int a, b;
	int a1,a2,a3,a4,a5,a6,a7;
	int b1,b2,b3,b4,b5,b6,b7;
	int sum1,sum2,sum3,sum4,sum5,sum6,sum7;

	scanf("%d %d", &a, &b);
	
	a1 = a/1000000;
	b1 = b/1000000;

	a2 = a/100000%10;
	b2 = b/100000%10;

	a3 = a/10000%10;
	b3 = b/10000%10;

	a4 = a/1000%10;
	b4 = b/1000%10;

	a5 = a/100%10;
	b5 = b/100%10;

	a6 = a%100/10;
	b6 = b%100/10;

	a7 = a%10;
	b7 = b%10;

	sum1=a1+b1;
	sum2=a2+b2;
	sum3=a3+b3;
	sum4=a4+b4;
	sum5=a5+b5;
	sum6=a6+b6;
	sum7=a7+b7;
	if(sum1 != 0)
	{
		printf("%d%d%d%d%d%d%d\n",sum1,sum2,sum3,sum4,sum5,a6+b6,sum7);
	}
	else if(sum2 !=0)
	{
		printf("%d%d%d%d%d%d\n",sum2,sum3,sum4,sum5,a6+b6,sum7);
	}
	else if(sum3 !=0)
	{
		printf("%d%d%d%d%d\n",sum3,sum4,sum5,a6+b6,sum7);
	}
	else if(sum4 !=0)
	{
		printf("%d%d%d%d\n",sum4,sum5,a6+b6,sum7);
	}
	else if(sum5 !=0)
	{
		printf("%d%d%d\n",sum5,a6+b6,sum7);
	}
	else if(sum6 !=0)
	{
		printf("%d%d\n",a6+b6,sum7);
	}
	else if(sum7 !=0)
	{
		printf("%d\n",sum7);
	}
}
