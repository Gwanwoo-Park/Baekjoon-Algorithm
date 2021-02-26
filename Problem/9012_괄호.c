#include <stdio.h>
#include <string.h>

main()
{
	int t;
	int i, j;
	int left;
	int right;
	char a[100];

	scanf("%d", &t);

	for(i=0; i<t; i++)
	{
		scanf("%s", a);

		if(a[0] == ')') 
		{
			printf("NO\n");
			continue;
		}
		left=0;
		right=0;

		for(j=0; a[j] != '\0'; j++)
		{
			if(a[j] == '(')
			{
				left++;
			}
			else if(a[j] == ')')
			{
				right++;
			}
			
			if(left == right)
			{
				if(a[j+1] == ')')
				{
					left--;
					break;
				}
			}
		}

		if(left == right) printf("YES\n");
		else printf("NO\n");
	}
}
