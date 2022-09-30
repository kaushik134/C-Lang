#include<stdio.h>
int main()
{
	char i,j,a=64;
	for(i=65;i<=69;i++)//row
	{
		for(j=65;j<=i;j++)//col
		{
			a++;		
			printf("%c ",a);
		}
		printf("\n");
	}
}