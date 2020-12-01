#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

main()
{
	int n;
	int i, j, k;
	int arr[200][3] = {0};
	int score[101] = {0};
	int score2[101] = {0};
	int score3[101] = {0};
	int sum = 0;

	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d", &arr[i][j]);

			if(j==0) score[arr[i][j]]++;
			else if(j==1) score2[arr[i][j]]++;
			else score3[arr[i][j]]++;
		}
	}

	for(i=0; i<n; i++)
	{
		for(j=0; j<3; j++)
		{
			if(j==0)
			{
				if(score[arr[i][j]] > 1)
				{
					arr[i][j] = 0;
				}
			}
			else if(j==1)
			{
				if(score2[arr[i][j]] > 1)
				{
					arr[i][j] = 0;
				}
			}
			else
			{
				if(score3[arr[i][j]] > 1)
				{
					arr[i][j] = 0;
				}
			}
		}
	}

	for(i=0; i<n; i++)
	{
		sum=0;
		for(j=0; j<3; j++)
		{
			sum += arr[i][j];
		}
		printf("%d\n", sum);
	}
}
