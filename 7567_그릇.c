#include <stdio.h>
#include <string.h>

main()
{
	char s[50];
	int i;
	int height=0;

	scanf("%s", s);

	for(i=0; i<strlen(s); i++)
	{
		if(i==0)
		{
			height += 10;
			continue;
		}

		if(s[i-1] == s[i])
		{
			height += 5;
		}
		else height+= 10;
	}
	printf("%d\n", height);
}
