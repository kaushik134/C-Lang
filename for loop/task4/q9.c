#include<stdio.h>
int main()
{
	char i,j;
	for(i=65;i<=69;i++)//row
	{
		for(j=65;j<=i;j++)//col
		{
			
			printf("%c ",j);
		}
		printf("\n");
	}
}