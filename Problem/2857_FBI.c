#include <stdio.h>

main()
{
	char a[100] = {0};
	int i, j;
	int s[5] = {0};
	int top= -1;

	for(i=0; i<5; i++)
	{
		scanf("%s", a);

		for(j=0; a[j] != '\0'; j++)
		{
			if(a[j] == 'F')
			{
				if(a[j+1] == 'B')
				{
					if(a[j+2] == 'I')
					{
						top++;
						s[top] = i+1;
						break;
					}
				}
			}
			else continue;
		}
	}
	if(top != -1)
	{
		for(i=0; i<top+1; i++)
		{
			printf("%d ", s[i]);
		}
	}
	else printf("HE GOT AWAY!");
	printf("\n");
}
