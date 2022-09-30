#include<stdio.h>
int main()
{
	int i,a[5],j,temp,x,y;
	for(i=0;i<5;i++)
	{
		printf("\n a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j>5;j++)
		{
			if(a[j]<a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("Assending Order :");
	for(i=0;i<5;i++)
	{
		printf("\t %d",a[i]);
	}
	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[j]>a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	printf("\nDessending Order: ");
	for(i=0;i<5;i++)
	{
		printf("\t%d",a[i]);
	}
}
