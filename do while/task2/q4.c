#include<stdio.h>
int main()
{
	int i=1,n,j=1;
	printf("\n Enter N: ");
	scanf("%d",&n);

	do
	{
		printf("\n %d",i*j++);
		i*=2;
	}while(i<=n);
}