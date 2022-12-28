#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("output","w");
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

	fprintf(fp,"\n *************************************************");
	fprintf(fp,"\n A \t\t B \t\t Total \t percentage \t Grade");
	fprintf(fp,"\n *************************************************");
	for(i=0;i<5;i++)
	{
		total=a[i]+b[i];
		percentage=total/2;
		if(33<percentage)
		{
			fprintf(fp,"\n %d \t %d \t %d \t %d \t\t\t pass",a[i],b[i],total,percentage);
		}
		else
		{
			fprintf(fp,"\n %d \t %d \t %d \t %d \t\t\t faill",a[i],b[i],total,percentage);
		}
	}
    fclose(fp);
}