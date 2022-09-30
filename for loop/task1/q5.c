#include<stdio.h>
int main()
{
	int i,n;
	printf("\n Enter Tables Number:");
	scanf("%d",&n);

	for(i=1;i<=10;i++)
	{
		printf("\n %d * %d = %d",n,i,i*n);
	}
}