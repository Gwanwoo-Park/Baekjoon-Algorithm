#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int s;

	scanf("%d", &s);

	if(s>=90)
	{
		printf("A\n");
	}
	else if(s>=80)
	{
		printf("B\n");
	}
	else if(s>=70)
	{
		printf("C\n");
	}
	else if(s>=60)
	{
		printf("D\n");
	}
	else
	{
		printf("F\n");
	}
}
