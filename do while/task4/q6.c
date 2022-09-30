#include<stdio.h>
int main()
{
	char i=64;
	do
	{
		char j=64;
		do
		{
			j++;
			printf("%c ",j);
		}while(j<=i);//col
		i++;
		printf("\n");
	}while(i<=68);//row
}