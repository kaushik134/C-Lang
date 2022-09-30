#include<stdio.h>
int main()
{
	int i=5;
	do
	{
		int j=1;
		do
		{
			printf("%d ",i);
			j++;
		}while(j<=5);
		i--;
		printf("\n");
	}while(i>=1);
}