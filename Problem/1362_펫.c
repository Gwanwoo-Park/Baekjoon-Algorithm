#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main()
{
	int o, w;
	char s;
	int n;
	int count = 0;
	double tmp;
	int compare;
	int pandan = 0;

	while(1)
	{
		//적정 체중, 실제 체중 입력받기
		scanf(" %d %d", &o, &w);

		//0, 0 이면 정지
		if(o == 0 && w == 0) break;

		//적정 체중의 0.5배 구한 후 compare 변수에 저장
		tmp = (double)o * 0.5;
		compare = (int)tmp;
		
		count++;

		while(1)
		{
			// 시나리오 입력
			scanf(" %c %d", &s, &n);

			if(s == '#' && n == 0)
			{
				break;
			}
			if(pandan == 1) continue;

			if(s == 'E')
			{
				w -= n;
			}
			else if(s == 'F')
			{
				w += n;
			}

			if(w <= 0)
			{
				pandan++;
			}
		}

		pandan = 0;
		printf("%d ", count);
		if(w <= 0)
		{
			printf("RIP\n");
		}
		else if(w > compare && w < o * 2)
		{
			printf(":-)\n");
		}
		else
		{
			printf(":-(\n");
		}
	}
}