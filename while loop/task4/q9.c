#include<stdio.h>
int main()
{
	char i=65,a=64;
	while(i<=69)//row
	{
		char j=65;
		while(j<=i)//col
		{
			a++;
			j++;			
			printf("%c ",a);
		}
		i++;
		printf("\n");
	}
}