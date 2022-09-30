#include<stdio.h>
int main()
{
	int i,j,row;
	printf("\n Enter Row");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=i;j<row;j++)
		printf(" ");
		for(j=1;j<=(2*i-1);j++)
		{
			if(i==row || j==1 || j==(2*i-1))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
		
	}
}