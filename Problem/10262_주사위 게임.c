#include <stdio.h>

main()
{
	int a1, a2, b1, b2;
	int a3, a4, b3, b4;

	scanf("%d %d %d %d", &a1, &a2, &b1, &b2);
	scanf("%d %d %d %d", &a3, &a4, &b3, &b4);

	if(a1+a2+b1+b2 > a3+a4+b3+b4) printf("Gunnar\n");
	else if(a1+a2+b1+b2 < a3+a4+b3+b4) printf("Emma\n");
	else printf("Tie\n");
}
