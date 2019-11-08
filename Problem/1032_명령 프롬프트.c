#include<stdio.h>
#include<math.h>

main()
{
	int n;
	int i, j, k;
	char a[49];
	char b[49];
	int num[100] = {0};

	scanf("%d", &n);

	scanf("%s", a);

	if(n == 1)
	{
		printf("%s\n", a);
	}
	else
	{
		for(i=1; i<n; i++)
		{
			scanf("%s", b);

			for(j=0; b[j] != '\0'; j++)
			{
				if(a[j] == b[j])
				{
					num[j]++;
				}
			}
		}

		for(i=0; a[i] != '\0'; i++)
		{
			if(num[i] == n-1)
			{
				printf("%c", a[i]);
			}
			else
			{
				printf("?");
			}
		}
		printf("\n");
	}
}