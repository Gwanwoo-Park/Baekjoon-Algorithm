#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

main()
{
	int i, j;
	int arr[3] = {0};
	int pandan=0;
	int sum=0;

	for(i=0; i<3; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	
	if(sum != 180) printf("Error\n");
	else
	{
		if(arr[0] == arr[1] && arr[1] == arr[2]) printf("Equilateral\n");
		else if(arr[0] == arr[1] || arr[1] == arr[2] || arr[0] == arr[2]) printf("Isosceles\n");
		else printf("Scalene\n");
	}

}
