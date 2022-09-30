#include<stdio.h>
int main()
{
	int i,n;
	printf("\n Enter N:");
	scanf("%d",&n);

	for(i=-n;i<=n;i++)
	{
		printf("\n %d",i);
	}
	return 0;
}