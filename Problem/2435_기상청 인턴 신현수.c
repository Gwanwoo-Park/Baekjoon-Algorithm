#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main(){
	int n, k;
	int i;
	int a[100] = {0, };
	int sum = 0;
	int max = -1000000;
	int start = 0, end = 0;

	scanf("%d %d", &n, &k);

	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}

	end = k;

	while(1){
		if(end > n) break;

		for(i = start; i < end; i++){
			sum += a[i];
		}
		if(max < sum) max = sum;
		sum = 0;
		start++;
		end++;
	}
	printf("%d\n", max);
}
