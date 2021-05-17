#include <stdio.h>

main()
{
	int n;
	int i, j;
	int chang, sang;
	int changSum=100, sangSum=100;

	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		scanf("%d %d", &chang, &sang);
		if(chang>sang) sangSum = sangSum - chang;
		else if(sang>chang) changSum = changSum - sang;
	}
	printf("%d\n%d\n", changSum, sangSum);
}
