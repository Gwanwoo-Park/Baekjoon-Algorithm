#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

main()
{
	int hour, min, sec, time;

	scanf("%d %d %d %d", &hour, &min, &sec, &time);

	hour = hour + time / 3600;
	min = min + time / 60 - (time/3600*60);
	sec = sec + time % 60;

	if(sec >= 60)
	{
		min++;
		sec = sec % 60; 
	}
	if(min >= 60)
	{
		hour++;
		min = min % 60;
	}
	if(hour >= 24)
	{
		hour = hour % 24;
	}
	printf("%d %d %d\n", hour, min, sec);

}
