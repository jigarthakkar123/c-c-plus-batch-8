#include<stdio.h>
#include<conio.h>
#include<dos.h>

void main()
{
	int a,b,c,d;
	clrscr();
	delay(1000);
	printf("\nEnter A : ");
	scanf("%d",&a);
	delay(1000);
	printf("\nEnter B : ");
	scanf("%d",&b);
	delay(1000);
	printf("\n\n1. Addition");
	delay(1000);
	printf("\n2. Subtraction");
	delay(1000);
	printf("\n3. Multiplication");
	delay(1000);
	printf("\n4. Division");
	delay(3000);
	printf("\n\nEnter Your Choice : ");
	scanf("%d",&d);
	switch(d)
	{
		case 1:
			c=a+b;
			printf("\nAddition : %d",c);
			break;
		case 2:
			c=a-b;
			printf("\nSubtraction : %d",c);
			break;
		case 3:
			c=a*b;
			printf("\nMultiplication : %d",c);
			break;
		case 4:
			c=a/b;
			printf("\nDivision : %d",c);
			break;
		default:
			printf("\nInvalid Choice");
			break;
	}

	getch();
}