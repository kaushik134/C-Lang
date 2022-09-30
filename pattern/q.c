#include<stdio.h>
int main()
{
	int i,j,n;
	printf("\n Enter N:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("*");
	}
	for(j=1;j<=(2*i-2);j++)
	{
		printf(" ");	
	}
	for(j=i;j<=n;j++)
	{
		printf("*");
	}
	printf("\n");
}