#include <stdio.h>

int main()
{
	int i;
	int n[50] = {0};
	int w, h;
	int N;

	scanf("%d %d %d", &N, &w, &h);

	for(i=0; i<N; i++)
	{
		scanf("%d", &n[i]);
	}
	for(i=0; i<N; i++)
	{
		if((n[i])*(n[i]) == w*w + h*h || n[i]*n[i] <= w*w + h*h)
		{
			printf("DA\n");
		}
		else if(n[i] <= w || n[i] <= h)
		{
			printf("DA\n");
		}
		else printf("NE\n");
	}
}
