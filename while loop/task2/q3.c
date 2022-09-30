#include<stdio.h>
int main()
{
	int i=1,n;
	printf("\n Enter N: ");
	scanf("%d",&n);

	while(i<=n)
	{
		
		printf("\n %d",i);
		i*=2;
	}
}