#include<stdio.h>
int main()
{
	int i=1,a=11;
	do
	{
		int j=1;
		do
		{
			printf("\t %d",a);
			a++;
			j++;
		}while(j<=5);
		i++;
		a+=5;
		printf("\n");
	}while(i<=5);
}