#include<stdio.h>
#include<conio.h>

void main()
{
	int s1,s2,s3,total;
	double per;
	clrscr();
	printf("Enter Marks Of Subject 1 : ");
	scanf("%d",&s1);
	printf("Enter Marks Of Subject 2 : ");
	scanf("%d",&s2);
	printf("Enter Marks Of Subject 3 : ");
	scanf("%d",&s3);
	total=s1+s2+s3;
	per=total/3;

	printf("\Total : %d",total);
	printf("\nPercentage : %lf",per);

	if(per>=70)
	{
		printf("\nDistinction");
	}
	else if(per>=60)
	{
		printf("\nFirst Class");
	}
	else if(per>=50)
	{
		printf("\nSecond Class");
	}
	else if(per>=40)
	{
		printf("\nPass Class");
	}
	else
	{
		printf("\nFail");
	}
	getch();
}