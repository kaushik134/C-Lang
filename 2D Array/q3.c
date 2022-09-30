#include<stdio.h>
int main()
{
	int a[5][5],at[5][5],i,j,n;
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

	/*for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}*/
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			at[j][i]=a[i][j];
		}
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t%d",at[i][j]);
		}
		printf("\n");
	}
}