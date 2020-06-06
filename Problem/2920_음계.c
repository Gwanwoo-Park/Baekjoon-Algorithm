#include <stdio.h>
#include <string.h>

main()
{
	int n[50];
	int i, j;
	int asc=1;
	int des=8;

	for(i=0; i<8; i++) scanf("%d", &n[i]);

	for(i=0; i<8; i++)
	{
		if(n[i] == asc)
		{
			asc++;
		}
		else if(n[i] == des)
		{
			des--;
		}
	}
	if(asc == 9) printf("ascending\n");
	else if(des == 1) printf("descending\n");
	else printf("mixed\n");
}
