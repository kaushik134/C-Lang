#include<stdio.h>
int main()
{
	int i=1,n,k;
	printf("\n Enter N:");
	scanf("%d",&n);
	while(i<=n)
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
		i++;
	}
	
}