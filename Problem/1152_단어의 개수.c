#include <stdio.h>

main()
{
	char a[1000001] = {0};
	int i;
	int sum=0;

	scanf("%[^\n]", a);

	for(i=0; ; i++)
	{
		if(i==0 && a[i] == ' ') continue;
		else if(a[i] == ' ') sum++;
		else if(a[i-1] == ' ' && a[i] == '\0')
		{
			sum--;
			break;
		}
		else if(a[i] == '\0') break;
	}
	printf("%d\n", sum+1);

}