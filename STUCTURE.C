#include<stdio.h>
#include<conio.h>

struct Student
{
	int rno;
	char name[50];
	long per;
};
struct Student getData(struct Student s)
{
	printf("\nEnter Roll No Of Student : ");
	scanf("%d",&s.rno);
	printf("\nEnter Student Name Of : ");
	scanf("%s",s.name);
	printf("\nEnter Percentage Of Student : ");
	scanf("%ld",&s.per);
	return s;
}
void printData(struct Student s)
{
	printf("\nRoll No : %d",s.rno);
	printf("\nStudent Name : %s",s.name);
	printf("\nPercentage : %ld",s.per);
}
void main()
{
	struct Student s;
	int i;
	clrscr();
	s=getData(s);
	printData(s);
	getch();
}
