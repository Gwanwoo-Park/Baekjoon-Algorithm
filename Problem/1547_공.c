#include <stdio.h>

main()
{
	int m;
	int i, j;
	int x, y;
	int a[4] = {0};
	int tmp;
	int fir, sec;

	a[1] = 1;
	a[2] = 2;
	a[3] = 3;

	scanf("%d", &m);

	for(i=0; i<m; i++)
	{
		scanf("%d %d", &x, &y);

		for(j=1; j<4; j++)
		{
			if(a[j] == x) fir = j;
			if(a[j] == y) sec = j;
		}
		tmp = a[fir];
		a[fir] = a[sec];
		a[sec] = tmp;
	}
	printf("%d\n", a[1]);
}