#include<stdio.h>
int main()
{
	int i,sum=0;
	for(i=1;i<=10;i+=2)
	{
		sum=sum+i;
		printf(" \n %d",i);
	}
	printf("\n Total: %d",sum);
}