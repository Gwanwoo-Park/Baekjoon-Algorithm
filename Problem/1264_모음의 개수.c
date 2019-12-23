#include <stdio.h>
#include <math.h>

main()
{
	char a[300];
	int i;
	int sum=0;

	while(1)
	{
		i=0;

		scanf(" %[^\n]", a);

		if(a[i] == '#') break;

		for(i=0; a[i] != '\0'; i++)
		{
			if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
			{
				sum++;
			}
		}
		printf("%d\n", sum);

		sum=0;
	}
}