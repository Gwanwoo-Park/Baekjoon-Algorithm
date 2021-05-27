#include <stdio.h>
#include <string.h>
#include <math.h>
#include <malloc.h>
#include <stdlib.h>

main()
{
	char s[80];
	int i, pandan=0;

	while(1)
	{
		scanf(" %[^\n]s", s);

		if(s[0] == 'E' && s[1] == 'O' && s[2] == 'I') break;

		for(i=0; i<strlen(s)-3; i++)
		{
			if(s[i] == 'N' || s[i] == 'n')
				if(s[i+1] == 'E' || s[i+1] == 'e')
					if(s[i+2] == 'M' || s[i+2] == 'm')
						if(s[i+3] == 'O' || s[i+3] == 'o')
						{
							printf("Found\n");
							pandan++;
							break;
						}
		}
		if(pandan == 0) printf("Missing\n");
		pandan=0;
	}
}
