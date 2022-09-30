#include<stdio.h>
int main()
{
	int i=2,sum=0;
	while(i<=10)
	{
		sum=sum+i;
		printf(" \n %d",i);
		i+=2;
	}
	printf("\n Total: %d",sum);
}