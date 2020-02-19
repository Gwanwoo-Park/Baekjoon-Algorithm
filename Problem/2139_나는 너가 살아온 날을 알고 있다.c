#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main()
{
	int day, month, year;
	int i;
	int arr[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int sum = 0;

	while(1)
	{
		scanf("%d %d %d", &day, &month, &year);

		if(day == 0 && month == 0 && year == 0) break;

		if(year % 4 == 0)
		{
			arr[2] = 29;
			if(year % 100 == 0) arr[2] = 28;
			if(year % 400 == 0) arr[2] = 29;
		}
		

		for(i = 1; i < month; i++)
		{
			sum += arr[i];
		}
		sum += day;

		printf("%d\n", sum);
		
		arr[2] = 28;
		sum = 0;
	}
}
