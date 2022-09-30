#include<stdio.h>
int main()
{
	int i=1,n,a=1,b=0,c;
	printf("\n Enter N:");
	scanf("%d",&n);
	do
	{
		c=a+b;
		a=b;
		b=c;
		printf("\n %d",c);
		i++;
	}while(i<=n);
}