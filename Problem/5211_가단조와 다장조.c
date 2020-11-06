#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main()
{
	char s[200];
	int i;
	int length;
	int j = 1;
	char music[100];
	int major = 0, minor = 0;
	int pandan = 0;

	scanf("%s", s);

	length = strlen(s);

	for(i=0; i<length; i++)
	{
		if(s[i] == '|') pandan++;
	}

	if(pandan != 0)
	{
		music[0] = s[0];

		for(i=1; i<length; i++)
		{
			if(s[i] == '|')
			{
				music[j] = s[i+1];
				j++;
			}
		}

		for(i=0; i<j; i++)
		{
			if(music[i] == 'C' || music[i] == 'F' || music[i] == 'G')
			{
				major++;
			}
			else if(music[i] == 'A' || music[i] == 'D' || music[i] == 'E')
			{
				minor++;
			}
		}

		if(major == minor)
		{
			if(s[length-1] == 'C' || s[length-1] == 'F' || s[length-1] == 'G')
			{
				major++;
			}
			else if(music[i] == 'A' || music[i] == 'D' || music[i] == 'E')
			{
				minor++;
			}
		}
	}
	else
	{
		if(s[0] == 'C' || s[0] == 'F' || s[0] == 'G')
		{
			major++;
		}
		else if(music[i] == 'A' || music[i] == 'D' || music[i] == 'E')
		{
			minor++;
		}
	}

	if(major > minor) printf("C-major\n");
	else printf("A-minor\n");
}
