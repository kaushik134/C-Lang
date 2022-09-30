#include<stdio.h>
int main()
{
	int i=1,sum=0;
	while(i<=10)
	{
		sum=sum+i;
		printf(" \n %d",i++);
	}
	printf("\n Total: %d",sum);
}