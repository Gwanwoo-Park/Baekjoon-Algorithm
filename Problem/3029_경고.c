#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

main()
{
	int h1, m1, s1;
	int h2, m2, s2;
	int h3, m3, s3;
	int a, b;

	scanf("%d:%d:%d %d:%d:%d", &h1, &m1, &s1, &h2, &m2, &s2);

	if(h1 > h2)
	{
		h2 += 24;
	}

	a = h1*3600 + m1*60 + s1;
	b = h2*3600 + m2*60 + s2;

	a = b - a;

	h3 = a/3600;
	m3 = (a - (h3*3600))/60;
	s3 = a - (h3*3600 + m3*60);

	if(h1==h2 && m1==m2 && s1==s2)
	{
		h3 = 24;
		m3=0;
		s3=0;
	}

	if(h3<10) printf("0");
	printf("%d:", h3);
	if(m3<10) printf("0");
	printf("%d:", m3);
	if(s3<10) printf("0");
	printf("%d\n", s3);
}
