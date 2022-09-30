#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\n Enter A:");
	scanf("%d",&a);
	printf("\n Enter B:");
	scanf("%d",&b);
	printf("\n Enter C:");
	scanf("%d",&c);

	(a>b&&a>c)?printf("A(%d) is big",a):((b>c)?printf("B(%d) is big",b):printf("C(%d) is big",c)); 
}