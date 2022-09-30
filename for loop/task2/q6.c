#include<stdio.h>
int main()
{
	int i,n,a=1,b=0,c;
	printf("\n Enter N:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("\n %d",c);
	}
}