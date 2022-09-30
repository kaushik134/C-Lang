#include<stdio.h>
int main()
{
	char i=64;
	while(i<=68)//row
	{
		char j=64;
		while(j<=i)//col
		{
			j++;
			printf("%c ",j);
		}
		i++;
		printf("\n");
	}
}