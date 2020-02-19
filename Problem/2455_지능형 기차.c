#define _CRT_SEUCRE_NO_WARNINGS
#include <stdio.h>

main()
{
	int t[5] = {0}, h[5] = {0};
	int i;
	int people[5] = {0};

	for(i=1; i<5; i++)
	{
		scanf("%d %d", &t[i], &h[i]);
	}
	people[1] = h[1];
	people[2] = people[1] - t[2] + h[2];
	people[3] = people[2] - t[3] + h[3];
	people[4] = people[3] - t[4] + h[4];

	if(people[1]>people[2] && people[1]>people[3] && people[1]>people[4])
	{
		printf("%d", people[1]);
	}
	else if(people[2]>people[1]&& people[2]>people[3] && people[2]>people[4])
	{
		printf("%d", people[2]);
	}
	else if(people[3]>people[1] && people[3]>people[2] && people[3]>people[4])
	{
		printf("%d", people[3]);
	}
	else
	{
		printf("%d", people[4]);
	}
}
