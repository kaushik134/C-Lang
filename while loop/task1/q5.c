#include<stdio.h>
int main()
{
	int i=1,n;
	printf("\n Enter Tables Number:");
	scanf("%d",&n);

	while(i<=10)
	{
		printf("\n %d * %d = %d",n,i,i*n);
		i++;
	}
}