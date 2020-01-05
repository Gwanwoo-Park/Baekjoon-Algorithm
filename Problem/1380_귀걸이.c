#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main()
{
	int n;
	int i;
	char s[102][102];
	int arr[101] = {0, };
	char input;
	int gps;
	int count = 0;

	while(1)
	{
		scanf("%d", &n);

		if(n == 0) break;

		count++;

		for(i = 1; i <= n; i++)
		{
			scanf(" %[^\n]", s[i]);
		}

		for(i = 1; i <= n; i++) arr[i] = 0;

		for(i = 0; i < 2 * n - 1; i++)
		{
			scanf("%d %c", &gps, &input);

			arr[gps]++;
		}

		for(i = 1; i <= n; i++)
		{
			if(arr[i] < 2) break;
		}

		printf("%d %s\n", count, s[i]);
	}
}