#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int test;
	int i;
	int candy, people;

	scanf("%d", &test);

	for(i = 0; i < test; i++)
	{
		scanf("%d %d", &candy, &people);

		printf("You get %d piece(s) and your dad gets %d piece(s).\n", candy/people, candy%people);
	}
}
