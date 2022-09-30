#include<stdio.h>
int main()
{
	char i=1,a=65;
	do
	{
		int j=1;
		do
		{
			printf("\t %c",a);
			a++;
			j++;
		}while(j<=5);
		i++;
		printf("\n");
	}while(i<=5);
}