#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, a= 0, b=0, c=0, d=0, e=0, f=0;
	int money;
	int sum;

	sum = 0;

	scanf("%d", &n);

	money = 1000 - n;

	a = money/500;
	b = money%500/100;
	c = money%500%100/50;
	d = money%500%100%50/10;
	e = money%500%100%50%10/5;
	f = money%100%50%10%5;

	sum = a + b + c + d + e + f;
	printf("%d", sum);
}
