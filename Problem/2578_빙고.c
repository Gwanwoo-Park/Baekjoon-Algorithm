#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int arr[5][5];
	int correct[5][5] = {0, };
	int i, j, k;
	int bingo[25] = {0, };
	int pandan = 0;
	int call = 0;

	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	for(i=0; i<25; i++)
	{
		scanf("%d", &bingo[i]);
	}

	for(i=0; i<25; i++)
	{
		call=0;
		for(j=0; j<5; j++)
		{
			for(k=0; k<5; k++)
			{
				if(bingo[i] == arr[j][k])
				{
					correct[j][k]++;
					pandan++;
					break;
				}
			}
			if(pandan==1)
			{
				break;
			}
		}

		pandan = 0;

		for(j=0; j<5; j++)
		{
			for(k=0; k<5; k++)
			{
				if(correct[j][k] == 1)
				{
					pandan++;
				}
			}
			if(pandan == 5)
			{
				call++;
			}
			pandan = 0;

			if(call >= 3)
			{
				break;
			}
		}

		for(j=0; j<5; j++)
		{
			for(k=0; k<5; k++)
			{
				if(correct[k][j] == 1)
				{
					pandan++;
				}
			}
			if(pandan == 5)
			{
				call++;
			}
			pandan = 0;

			if(call >= 3)
			{
				break;
			}
		}
		
		for(j=0, k=4; j<5, k>=0; j++, k--)
		{
			if(correct[j][k] == 1) pandan++;
		}

		if(pandan == 5)
		{
			call++;
		}
		pandan = 0;

		for(j=0, k=0; j<5, k<5; j++, k++)
		{
			if(correct[j][k] == 1) pandan++;
		}

		if(pandan == 5)
		{
			call++;
		}
		pandan = 0;

		if(call >= 3)
		{
			/*
			printf("%d\n", call);
			printf("i가 %d일때\n", i);

			for(j=0; j<5; j++)
			{
				for(k=0; k<5; k++)
				{
					printf("%3d ", correct[j][k]);
				}
				printf("\n");
			}
			*/
			break;
		}
	}
	printf("%d\n", i+1);
}
