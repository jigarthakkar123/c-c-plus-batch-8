/*
Condition Statement if

1. Simple If

	if(condition)
	{
		statement;
	}
2. if/else

	if(condition)
	{
		statement;
	}
	else
	{
		statement;
	}
3. Nested if

	if(condition)
	{
		if(condition)
		{
			statement;
		}
		else
		{
			statement;
		}
	}
	else
	{
		statement;
	}

4. Ladder if

	if(condition)
	{
		statement;
	}
	else if(condition)
	{
		statement;
	}
	else if(condition)
	{
		statement;
	}
	else
	{
		statement;
	}
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("Enter A : ");
	scanf("%d",&a);
	printf("\nEnter B : ");
	scanf("%d",&b);
	printf("\nEnter C : ");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("\nA Is Max Value");
		}
		else
		{
			printf("\nC Is Max Value");
		}
	}
	else if(b>c)
	{
		printf("\nB Is Max Value");
	}
	else
	{
		printf("\nC Is Max Value");
	}
	getch();
}