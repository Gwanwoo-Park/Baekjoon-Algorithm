#include <stdio.h>
#include <string.h>

main()
{
	int e=0, s=0, m=0, a, b, c;
	int i, j;
	int pandan=0;

	scanf("%d %d %d", &a, &b, &c);

	while(1)
	{
		if(a!=e || b!=s || c!=m)
		{
			if(e==15) e=1;
			else e++;

			if(s==28) s=1;
			else s++;

			if(m==19) m=1;
			else m++;
		}
		else break;
		pandan++;
	}
	printf("%d\n", pandan);
}