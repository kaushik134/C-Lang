#include<stdio.h>
#include<conio.h>
void main()
{
	int unit;
	float rs,a,t;
	clrscr();
	printf("\n Enter Unit:");
	scanf("%d",&unit);

	if(unit<=100)
	{
		rs=unit*0.60+50;
		printf("\n Bill: %f",rs);
	}
	else if(unit>100 && unit<=300)
	{
		rs=60+((unit-100)*0.80)+50;
		printf("\n Bill: %f",rs);
	}
	else if(unit>300)
	{
		rs=60+160+((unit-300)*0.90)+50;
		if(rs>300)
		{
			a=rs*0.15;
			t=a+rs;
			printf("\n Bill: %f",t);
		}
		else
		{
			printf("\n Bill: %f",rs);
		}

	}
	getch();
}