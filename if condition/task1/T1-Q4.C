#include<stdio.h>
#include<conio.h>
void main()
{
	int income;
	float tax;
	clrscr();
	printf("\n Enter Income: ");
	scanf("%d",&income);

	if(income<=2500)
	{
		printf("\n No Tax");
	}
	else if(income>2500 && income<=5000)
	{
		tax=(income-2500)*0.10;
		printf("\n Tax: %0.2f",tax);
	}
	else if(income>5000 && income<=10000)
	{
		tax=((income-5000)*0.20)+250;
		printf("\n Tax: %0.2f",tax);
	}
	else
	{
		tax=((income-10000)*0.30)+1250;
		printf("\n Tax: %0.2f",tax);
	}
	getch();
}