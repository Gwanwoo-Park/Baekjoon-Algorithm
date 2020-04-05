#include <stdio.h>
#include <string.h>

main()
{
	char a[101] = {0};
	int i, j;

	scanf("%s", a);

	for(i=0; a[i] != '\0'; i++)
	{
		if(a[i] == 'C' || a[i] == 'A' || a[i] == 'M' || a[i] == 'B' || a[i] == 'R' || a[i] == 'I' || a[i] == 'D' || a[i] == 'G' || a[i] == 'E')
		{
			a[i] = '0';
		}
	}
	for(i=0; a[i] != '\0'; i++)
	{
		if(a[i] != '0') printf("%c", a[i]);
	}
	printf("\n");
}
