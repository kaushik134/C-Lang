#include<stdio.h>
int main()
{
	int i=5;
	do
	{
		int j=5;
		do
		{
			printf("%d",i);
			j--;
		}while(j>=i);
		i--;
		printf("\n");
	}while(i>=1);
}