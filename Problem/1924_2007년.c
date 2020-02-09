#include <stdio.h>

int main()
{
	int x, y;

	scanf("%d %d", &x, &y);

	if(x==1)
	{
		if(y==1 || y==8 || y==15 || y==22 || y==29) printf("MON\n");
		else if(y==2 || y==9 || y==16 || y==23 || y==30) printf("TUE\n");
		else if(y==3 || y==10 || y==17 || y==24 || y==31) printf("WED\n");
		else if(y==4 || y==11 || y==18 || y==25) printf("THU\n");
		else if(y==5 || y==12 || y==19 || y==26) printf("FRI\n");
		else if(y==6 || y==13 || y==20 || y==27) printf("SAT\n");
		else if(y==7 || y==14 || y==21 || y==28) printf("SUN\n");
	}
	if(x==2)
	{
		if(y==5 || y==12 || y==19 || y==26) printf("MON\n");
		else if(y==6 || y==13 || y==20 || y==27) printf("TUE\n");
		else if(y==7 || y==14 || y==21 || y==28) printf("WED\n");
		else if(y==1 || y==8 || y==15 || y==22) printf("THU\n");
		else if(y==2 || y==9 || y==16 || y==23) printf("FRI\n");
		else if(y==3 || y==10 || y==17 || y==24) printf("SAT\n");
		else if(y==4 || y==11 || y==18 || y==25) printf("SUN\n");
	}
	if(x==3)
	{
		if(y==5 || y==12 || y==19 || y==26) printf("MON\n");
		else if(y==6 || y==13 || y==20 || y==27) printf("TUE\n");
		else if(y==7 || y==14 || y==21 || y==28) printf("WED\n");
		else if(y==1 || y==8 || y==15 || y==22 || y==29) printf("THU\n");
		else if(y==2 || y==9 || y==16 || y==23 || y==30) printf("FRI\n");
		else if(y==3 || y==10 || y==17 || y==24 || y==31) printf("SAT\n");
		else if(y==4 || y==11 || y==18 || y==25) printf("SUN\n");
	}
	if(x==4)
	{
		if(y==2 || y==9 || y==16 || y==23 || y==30) printf("MON\n");
		else if(y==3 || y==10 || y==17 || y==24) printf("TUE\n");
		else if(y==4 || y==11 || y==18 || y==25) printf("WED\n");
		else if(y==5 || y==12 || y==19 || y==26) printf("THU\n");
		else if(y==6 || y==13 || y==20 || y==27) printf("FRI\n");
		else if(y==7 || y==14 || y==21 || y==28) printf("SAT\n");
		else if(y==1 || y==8 || y==15 || y==22 || y==29) printf("SUN\n");
	}
	if(x==5)
	{
		if(y==7 || y==14 || y==21 || y==28) printf("MON\n");
		else if(y==1 || y==8 || y==15 || y==22 || y==29) printf("TUE\n");
		else if(y==2 || y==9 || y==16 || y==23 || y==30) printf("WED\n");
		else if(y==3 || y==10 || y==17 || y==24 || y==31) printf("THU\n");
		else if(y==4 || y==11 || y==18 || y==25) printf("FRI\n");
		else if(y==5 || y==12 || y==19 || y==26) printf("SAT\n");
		else if(y==6 || y==13 || y==20 || y==27) printf("SUN\n");
	}
	if(x==6)
	{
		if(y==4 || y==11 || y==18 || y==25) printf("MON\n");
		else if(y==5 || y==12 || y==19 || y==26) printf("TUE\n");
		else if(y==6 || y==13 || y==20 || y==27) printf("WED\n");
		else if(y==7 || y==14 || y==21 || y==28) printf("THU\n");
		else if(y==1 || y==8 || y==15 || y==22 || y==29) printf("FRI\n");
		else if(y==2 || y==9 || y==16 || y==23 || y==30) printf("SAT\n");
		else if(y==3 || y==10 || y==17 || y==24) printf("SUN\n");
	}
	if(x==7)
	{
		if(y==2 || y==9 || y==16 || y==23 || y==30) printf("MON\n");
		else if(y==3 || y==10 || y==17 || y==24 || y==31) printf("TUE\n");
		else if(y==4 || y==11 || y==18 || y==25) printf("WED\n");
		else if(y==5 || y==12 || y==19 || y==26) printf("THU\n");
		else if(y==6 || y==13 || y==20 || y==27) printf("FRI\n");
		else if(y==7 || y==14 || y==21 || y==28) printf("SAT\n");
		else if(y==1 || y==8 || y==15 || y==22 || y==29) printf("SUN\n");
	}
	if(x==8)
	{
		if(y==6 || y==13 || y==20 || y==27) printf("MON\n");
		else if(y==7 || y==14 || y==21 || y==28) printf("TUE\n");
		else if(y==1 || y==8 || y==15 || y==22 || y==29) printf("WED\n");
		else if(y==2 || y==9 || y==16 || y==23 || y==30) printf("THU\n");
		else if(y==3 || y==10 || y==17 || y==24 || y==31) printf("FRI\n");
		else if(y==4 || y==11 || y==18 || y==25) printf("SAT\n");
		else if(y==5 || y==12 || y==19 || y==26) printf("SUN\n");
	}
	if(x==9)
	{
		if(y==3 || y==10 || y==17 || y==24) printf("MON\n");
		else if(y==4 || y==11 || y==18 || y==25) printf("TUE\n");
		else if(y==5 || y==12 || y==19 || y==26) printf("WED\n");
		else if(y==6 || y==13 || y==20 || y==27) printf("THU\n");
		else if(y==7 || y==14 || y==21 || y==28) printf("FRI\n");
		else if(y==1 || y==8 || y==15 || y==22 || y==29) printf("SAT\n");
		else if(y==2 || y==9 || y==16 || y==23 || y==30) printf("SUN\n");
	}
	if(x==10)
	{
		if(y==1 || y==8 || y==15 || y==22 || y==29) printf("MON\n");
		else if(y==2 || y==9 || y==16 || y==23 || y==30) printf("TUE\n");
		else if(y==3 || y==10 || y==17 || y==24 || y==31) printf("WED\n");
		else if(y==4 || y==11 || y==18 || y==25) printf("THU\n");
		else if(y==5 || y==12 || y==19 || y==26) printf("FRI\n");
		else if(y==6 || y==13 || y==20 || y==27) printf("SAT\n");
		else if(y==7 || y==14 || y==21 || y==28) printf("SUN\n");
	}
	if(x==11)
	{
		if(y==5 || y==12 || y==19 || y==26) printf("MON\n");
		else if(y==6 || y==13 || y==20 || y==27) printf("TUE\n");
		else if(y==7 || y==14 || y==21 || y==28) printf("WED\n");
		else if(y==1 || y==8 || y==15 || y==22 || y==29) printf("THU\n");
		else if(y==2 || y==9 || y==16 || y==23 || y==30) printf("FRI\n");
		else if(y==3 || y==10 || y==17 || y==24) printf("SAT\n");
		else if(y==4 || y==11 || y==18 || y==25) printf("SUN\n");
	}
	if(x==12)
	{
		if(y==3 || y==10 || y==17 || y==24 || y==31) printf("MON\n");
		else if(y==4 || y==11 || y==18 || y==25) printf("TUE\n");
		else if(y==5 || y==12 || y==19 || y==26) printf("WED\n");
		else if(y==6 || y==13 || y==20 || y==27) printf("THU\n");
		else if(y==7 || y==14 || y==21 || y==28) printf("FRI\n");
		else if(y==1 || y==8 || y==15 || y==22 || y==29) printf("SAT\n");
		else if(y==2 || y==9 || y==16 || y==23 || y==30) printf("SUN\n");
	}
}