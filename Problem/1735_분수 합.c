#include <stdio.h>
#include <math.h>
#include <string.h>

int gdc(int a,int b) //최대공약수를 반환하는 함수
{         
	int i,j;
	int temp; //공약수를 저장할 변수
	j = (a<b)?a:b; //둘중 작은수를 구함

	for(i=1;i<=j;i++) {
		if(a%i==0 && b%i==0)
			temp = i;
	}
	return temp;
}

int lcm(int a,int b) //최소공배수를 반환하는 함수
{
	int i,j;
	int temp; //공배수를 저장할 변수
	j = (a>b)?a:b; //둘중 큰수를 구함

	for(i=j;;i++) {
		if(i%a==0 && i%b==0){
			temp = i;
			break;
		}
	}
	return temp;
}

main()
{
	int a, b, a2, b2;
	int tmp=0;
	int bunmo, bunza, bunmo2, bunza2;

	scanf("%d %d %d %d", &a, &b, &a2, &b2);

	tmp = lcm(b,b2);

	bunza = tmp/b;
	bunza2 = tmp/b2;

	a = bunza * a;
	a2 = bunza2 * a2;

	b = b2 = tmp;

	a = a + a2;

	tmp = gdc(a,b);

	printf("%d %d\n", a/tmp, b/tmp);
}