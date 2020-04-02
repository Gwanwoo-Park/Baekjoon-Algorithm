#include <stdio.h>
#include <string.h>

main()
{
	char a[50];
	int i, j;

	scanf("%s", a);

	if(a[0] == 'A')
	{
		if(a[1] == '+') printf("4.3\n");
		else if(a[1] == '0') printf("4.0\n");
		else printf("3.7\n");
	}
	else if(a[0] == 'B')
	{
		if(a[1] == '+') printf("3.3\n");
		else if(a[1] == '0') printf("3.0\n");
		else printf("2.7\n");
	}
	else if(a[0] == 'C')
	{
		if(a[1] == '+') printf("2.3\n");
		else if(a[1] == '0') printf("2.0\n");
		else printf("1.7\n");
	}
	else if(a[0] == 'D')
	{
		if(a[1] == '+') printf("1.3\n");
		else if(a[1] == '0') printf("1.0\n");
		else printf("0.7\n");
	}
	else printf("0.0\n");
}
