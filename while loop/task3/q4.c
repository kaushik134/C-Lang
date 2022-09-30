#include<stdio.h>
int main()
{
	char i=65;
	while(i<=69)
	{
		int j=65;
		while(j<=69)
		{
			printf("%c ",i);
			j++;
		}
		i++;
		printf("\n");
	}
}