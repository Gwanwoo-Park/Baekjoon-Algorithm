#include <stdio.h>
#include <string.h>

main()
{
	int a, b, c;
	int res;
	char s[100000] = {'a'};
	int sum[10]={0};
	int i,j;
	int length;

	scanf("%d %d %d", &a, &b, &c);

	res = a*b*c;

	sprintf(s, "%d", res);

	length = strlen(s);

	for(i=0; i<length; i++)
	{
		if(s[i] == '0') sum[0]++;
		else if(s[i]=='1') sum[1]++;
		else if(s[i]=='2') sum[2]++;
		else if(s[i]=='3') sum[3]++;
		else if(s[i]=='4') sum[4]++;
		else if(s[i]=='5') sum[5]++;
		else if(s[i]=='6') sum[6]++;
		else if(s[i]=='7')  sum[7]++;
		else if(s[i]=='8') sum[8]++;
		else if(s[i]=='9') sum[9]++;
	}
	for(i=0; i<10; i++)
	{
		printf("%d\n", sum[i]);
	}
}
