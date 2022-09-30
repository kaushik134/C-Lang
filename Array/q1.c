#include<stdio.h>
int main()
{
	int a[5],b[5],i,total,percentage;
	printf("\n ENTER A:");
	for(i=0;i<5;i++)
	{
		printf("\n Enter A[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("\n ENTER B:");
	for(i=0;i<5;i++)
	{
		printf("\n Enter B[%d]:",i);
		scanf("%d",&b[i]);
	}
	printf("\n *************************************************");
	printf("\n A \t B \t Total \t percentage \t Grade");
	printf("\n *************************************************");
	for(i=0;i<5;i++)
	{
		total=a[i]+b[i];
		percentage=total/2;
		if(33<percentage)
		{
			printf("\n %d \t %d \t %d \t %d \t\t pass",a[i],b[i],total,percentage);
		}
		else
		{
			printf("\n %d \t %d \t %d \t %d \t\tfaill",a[i],b[i],total,percentage);
		}
	}
}