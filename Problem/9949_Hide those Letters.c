#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main()
{
	int count = 0;
	int i, j;
	int n, length;
	char s[255];
	char fir1, sec1;
	char fir2, sec2;

	while(1)
	{
		count++;
		scanf(" %c %c", &fir1, &sec1);
		if(fir1 == '#' && sec1 == '#') break;
		if(fir1 >= 'A' && fir1 <= 'Z')
		{
			fir2 = fir1 + ('a' - 'A');
		}
		else fir2 = fir1 - ('a' - 'A');
		if(sec1 >= 'A' && sec1 <= 'Z')
		{
			sec2 = sec1 + ('a' - 'A');
		}
		else sec2 = sec1 - ('a' - 'A');

		scanf(" %d", &n);

		printf("Case %d\n", count);
		for(i=0; i<n; i++)
		{
			scanf(" %[^\n]", s);

			length = strlen(s);
			for(j=0; j<length; j++)
			{
				if(s[j] == fir1 || s[j] == fir2 || s[j] == sec1 || s[j] == sec2)
				{
					s[j] = '_';
				}
			}
			printf("%s\n", s);
		}
		printf("\n");
	}
}
