#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main()
{
	int i, j;
	int n, length;
	char s[255];
	int sub;
	int subtmp;

	while(1)
	{
		scanf(" %[^\n]", s);

		if(s[0] == '#') break;

		length = strlen(s);

		sub = s[length-1] - 'A';
		for(i=0; i<length-1; i++)
		{
			if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
			{
				if(s[i] >= 'A' && s[i] <= 'Z')
				{
					if(s[i] - sub < 'A')
					{
						subtmp = sub - (s[i] - 'A');
						s[i] = 'Z';
						s[i] = s[i] - subtmp+1;
					}
					else s[i] = s[i] - sub;
				}
				else
				{
					if(s[i] - sub < 'a')
					{
						subtmp = sub - (s[i] - 'a');
						s[i] = 'z';
						s[i] = s[i] - subtmp+1;
					}
					else s[i] = s[i] - sub;
				}
			}
		}
		for(i=0; i<length-1; i++)
		{
			printf("%c", s[i]);
		}
		printf("\n");
	}
}
