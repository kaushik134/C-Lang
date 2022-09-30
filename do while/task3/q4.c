#include<stdio.h>
int main()
{
	char i=65;
	do
	{
		int j=65;
		do
		{
			printf("%c ",i);
			j++;
		}while(j<=69);
		i++;
		printf("\n");
	}while(i<=69);
}