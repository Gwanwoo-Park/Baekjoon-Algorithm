#include <stdio.h>
#include <math.h>
#include <string.h>

int gdc(int a,int b) //�ִ������� ��ȯ�ϴ� �Լ�
{         
	int i,j;
	int temp; //������� ������ ����
	j = (a<b)?a:b; //���� �������� ����

	for(i=1;i<=j;i++) {
		if(a%i==0 && b%i==0)
			temp = i;
	}
	return temp;
}

int lcm(int a,int b) //�ּҰ������ ��ȯ�ϴ� �Լ�
{
	int i,j;
	int temp; //������� ������ ����
	j = (a>b)?a:b; //���� ū���� ����

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