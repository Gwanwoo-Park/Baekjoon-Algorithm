#include <stdio.h>

main()
{
	int king=1, queen=1, rook=2, beeshop=2, night=2, phon=8;
	int a1, a2, a3, a4, a5, a6;
	int b1, b2, b3, b4, b5, b6;

	scanf("%d %d %d %d %d %d", &a1, &a2, &a3, &a4, &a5, &a6);

	if(king == a1)
	{
		b1 = 0;
	}
	else
	{
		b1 = king - a1;
	}
	if(queen == a2)
	{
		b2 = 0;
	}
	else
	{
		b2 = queen - a2;
	}
	if(rook == a3)
	{
		b3 = 0;
	}
	else
	{
		b3 = rook - a3;
	}
	if(beeshop == a4)
	{
		b4 = 0;
	}
	else
	{
		b4 = beeshop - a4;
	}
	if(night == a5)
	{
		b5 = 0;
	}
	else
	{
		b5 = night - a5;
	}
	if(phon == a6)
	{
		b6 = 0;
	}
	else
	{
		b6 = phon - a6;
	}
	printf("%d %d %d %d %d %d\n", b1, b2, b3, b4, b5, b6);
}
