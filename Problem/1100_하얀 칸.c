#include <stdio.h>

main()
{
	char a[9][9];
	int i, j;
	int sum=0;

	for(i=0; i<8; i++)
	{
		for(j=0; j<8; j++)
		{
			scanf(" %c", &a[i][j]);

			if(i%2 == 0 && j%2 == 0 && a[i][j] == 'F')
			{
				sum++;
			}
			else if(i%2 == 1 && j%2 == 1 && a[i][j] == 'F')
			{
				sum++;
			}
		}
	}
	printf("%d\n", sum);
}