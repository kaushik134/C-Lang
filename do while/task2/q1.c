#include<stdio.h>
int main()
{
	int i=1,n,k;
	printf("\n Enter N:");
	scanf("%d",&n);
	do
	{
		k=i*i;
		printf("\n Sqaure: %d",k);	
		i++;
	}while(i<=n);
}