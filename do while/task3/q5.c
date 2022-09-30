#include<stdio.h>
int main()
{
	int i=2;
	do
	{
		int j=2;
		do
		{
			printf("\t%d",i);
			j+=2;
		}while(j<=10);
		i+=2;
		printf("\n");
	}while(i<=10);	
}