#include<stdio.h>
#include<math.h>

main()
{
	int x, y, w, h;
	int a;
	int b;
	int c, d;
	int min;

	scanf("%d %d %d %d", &x, &y, &w, &h);

	a = x;
	b = h-y;
	c = y;
	d = w-x;

	min = a;

	if(min > b) min=b;
	if(min > c) min=c;
	if(min > d) min=d;

	printf("%d\n", min);
}