#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("\n Enter Age:");
	scanf("%d",&a);

	if(a>=18)
	{
		printf("\n Eligible Voting");
	}
	else
	{
	       printf("\n Eligible Not Voting");
	}
	getch();
}