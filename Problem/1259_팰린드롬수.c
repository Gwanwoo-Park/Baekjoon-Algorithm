#include <stdio.h>

main()
{
	int arr[1000] = {0};
	int i = 0;
	int a, b, c, d;

	while(1)
	{
		scanf("%d", &arr[i]);
		if(arr[i] == 0) break;
		i++;
	}
	i = 0;

	while(1)
	{
		a = arr[i]%10;
		if(arr[i] >= 10000)
		{
			b = arr[i]/10000;
			c = (arr[i] - (arr[i]/100*100))/10;
			d = arr[i]/1000%10;
			if(a==b && c==d)
			{
				printf("yes\n");
			}
			else printf("no\n");
		}
		else if(arr[i] >= 1000)
		{
			b = arr[i]/1000;
			c = (arr[i] - (arr[i]/100*100))/10;
			d = arr[i]/100%10;
			if(a==b && c==d) printf("yes\n");
			else printf("no\n");
		}
		else if(arr[i] >= 100)
		{
			b = arr[i] / 100;
			if(a==b) printf("yes\n");
			else printf("no\n");
		}
		else if(arr[i] >= 10)  // 15
		{
			b = arr[i]/10;
			if(a==b) printf("yes\n");
			else printf("no\n");
		}
		else printf("yes\n");
		i++;
		if(arr[i] == 0) break;
	}
}