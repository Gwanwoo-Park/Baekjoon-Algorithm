#include <stdio.h>
#include <string.h>

main()
{
	int i, j, sum=0;
	char arr[10001];
	char arr2[10001];

	scanf("%s %s", arr, arr2);

	for(i=0; i<strlen(arr); i++)
	{
		for(j=0; j<strlen(arr2); j++)
		{
			sum = sum + ((arr[i]-'0')*(arr2[j]-'0'));
		}
	}
	printf("%lld\n", sum);
}