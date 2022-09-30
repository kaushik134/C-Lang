#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	clrscr();
	printf("\n Enter X:");
	scanf("%d",&x);

	printf("\n Enter Y:");
	scanf("%d",&y);

	if(x<2000 || x>3000)
	{
		printf("\n X: %d",x);
	}
	if(y>100 && y<500)
	{
			printf("\n Y: %d",y);
	}




	getch();
}