#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

main()
{
	char s[15] = {'\0'};
	int i, j, k;
	int sum=0;
	int pandan=0;
	char alp[8][4] = {{'A', 'B', 'C'}, 
	{'D', 'E', 'F'}, {'G', 'H', 'I'}, {'J', 'K', 'L'},
	{'M', 'N', 'O'}, {'P', 'Q', 'R', 'S'}, {'T', 'U', 'V'},
	{'W', 'X', 'Y', 'Z'}};

	scanf("%s", s);

	for(i=0; s[i] != '\0'; i++)
	{
		for(j=0; j<8; j++)
		{
			for(k=0; k<4; k++)
			{
				if(s[i] == alp[j][k])
				{
					sum += j+3;
					pandan++;
					break;
				}
			}
			if(pandan==1) break;
		}
		pandan=0;
	}
	printf("%d\n", sum);
}
