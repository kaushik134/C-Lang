#include<stdio.h>
int main()
{
	char i=65,a=64;
	do
	{
		char j=65;
		do
		{
			a++;
			j++;			
			printf("%c ",a);
		}while(j<=i);//col
		i++;
		printf("\n");
	}while(i<=69);//row
}