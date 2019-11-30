#include<stdio.h>
#include<string.h>

main()
{
	char a[1000000];
	int i, j, len, count, max;
	int fin[26];
	int sum=0;
	int k;

	scanf("%s", a);

	len = strlen(a);

	for(i=65; i<91; i++)
	{
		count=0;

		for(j=0; j<len; j++)
		{
			if(a[j] == i || a[j] == i+32)
			{
				count++;
			}
			fin[i-65] = count;
		}
	}
	max = fin[0];

	for(i=1; i<26; i++)
	{
		if(max < fin[i])
		{
			max = fin[i];
		}
	}

	for(i=0; i<26; i++)
	{
		if(max == fin[i])
		{
			sum++;
			k = i;
		}
	}
	if(sum==1) printf("%c\n", k+65);
	else printf("?\n");
}