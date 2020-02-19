#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

main()
{
	int hour, min, time;

	scanf("%d %d %d", &hour, &min, &time);

	hour = hour + time / 60;
	min = min + time % 60;

	if(min >= 60)
	{
		hour++;

		min = min % 60;
	}

	if(hour >= 24)
	{
		hour = hour % 24;
	}

	printf("%d %d\n", hour, min);
}
