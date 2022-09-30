#include<stdio.h>
int main()
{
	int math,physics,chemistry,english,total,per;
	printf("\n enter the maths marks:");
	scanf("%d",&math);

	printf("\n enter the physics marks:");
	scanf("%d",&physics);

	printf("\n enter the chemistry marks:");
	scanf("%d",&chemistry);

	printf("\n enter the English marks:");
	scanf("%d",&english);

	total=math+physics+chemistry+english;
	printf("\n total: %d",total);

	per=total/4;
	printf("\n percentage: %d",per);

	if(math>40 && physics>40 && chemistry>40 && english>40)
	{
		 if(per>=70 && per<=100)
		{
			printf("\n Grade: A");
		}
		else if(per>=60 && per<=70)
		{
			printf("\n Grade: B");
		}
		else if(per>=50 && per<=60)
		{
			printf("\n Grade: C");
		}
		else if(per>=40 && per<=50)
		{
			printf("\n Grade: D");
		}
		else
		{
			printf("\n Faill");
		}
	}
	else
	{
		printf("\n Grade:Fail");
	}
}