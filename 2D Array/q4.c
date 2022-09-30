#include<stdio.h>
int main()
{
	int a[5][5],at[5][5],i,j,n,sum=0,upr=0,lwr=0;
	printf("\n Enter N:");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
	
	/*Transport a*/
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			at[j][i]=a[i][j];
		}
	}

	/*Print at[i][j]*/
	/*for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t%d",at[i][j]);
		}
		printf("\n");
	}*/

	/*Diagnol Total:*/
	for(i=0;i<n;i++)
	{
		sum=sum+a[i][i];
	}

	/*Upper triangle Total:*/
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i<j)
			{
				upr=upr+a[i][j];
			}
		}
	}

	/*Lower triangle Total:*/
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j<i)
			{
				lwr=lwr+a[i][j];
			}
		}
	}
	printf("\n Diagnol Total: %d",sum);
	printf("\n Upper Triangle Total: %d",upr);
	printf("\n Upper Triangle Total: %d",lwr);
}