#include <stdio.h>
#include <stdlib.h>

int compare (void *first, void *second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else 
        return 0;
}

main()
{
	int n;
	int i, j;
	int a[26] = {0};
	int pandan=0;

	char s[150];

	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		scanf("%s", s);

		a[s[0]-97]++;
	}
	for(i=0; i<26; i++)
	{
		if(a[i] >= 5)
		{
			printf("%c", i+97);
			pandan++;
		}
	}
	if(pandan==0) printf("PREDAJA");
	printf("\n");
}