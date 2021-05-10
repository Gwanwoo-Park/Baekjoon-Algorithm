#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[5];
	int i, sum;

	sum = 0;

	for(i=0; i<5; i++)
	{
		scanf("%d", &arr[i]);

		if(arr[i] < 40)
		{
			arr[i] = 40;
			sum = sum + 40;
		}
		else
		{
			arr[i] = arr[i];
			sum = sum + arr[i];
		}
	}

	printf("%d\n", sum/5);
}
