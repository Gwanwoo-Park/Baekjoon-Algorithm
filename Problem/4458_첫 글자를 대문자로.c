#include <stdio.h>

main()
{
	int n;
	int i, j;
	char arr[100];

	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		scanf(" %[^\n]s", arr);

		if(arr[0] >= 97 && arr[0] <= 122)
		{
			arr[0] = arr[0] - 32;
		}
		printf("%s\n", arr);
	}
}
