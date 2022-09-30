#include<stdio.h>
int main()
{
	int i=1,sum=0;
	do
	{
		sum=sum+i;
		printf(" \n %d",i++);
	}while(i<=10);
	
	printf("\n Total: %d",sum);
}