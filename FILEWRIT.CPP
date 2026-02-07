#include<stdio.h>
#include<conio.h>

void main()
{
	FILE *f;
	int rno,r;
	char sname[50],s[50];
	double per,p;
	clrscr();
	f=fopen("tops1.txt","	w");
	printf("\nEnter Roll No : ");
	scanf("%d",&rno);
	printf("\nEnter Student Name : ");
	scanf("%s",&sname);
	printf("\nEnter Percentage : ");
	scanf("%lf",&per);
	fprintf(f,"%d %s %lf",rno,sname,per);
	fclose(f);
	f=fopen("tops1.txt","r");
	fscanf(f,"%d %s %lf",&r,&s,&p);
	printf("\nRoll No : %d",r);
	printf("\nStudent Name : %s",s);
	printf("\nPercentage : %lf",p);
	fclose(f);
	getch();
}

