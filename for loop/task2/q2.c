#include<stdio.h>
int main()
{
	int i,n,k;
	printf("\n Enter N:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			k=i*i;
			printf("\n %d",k);
		}
		else
		{
			printf("\n %d",i);
		}
	}
	
}