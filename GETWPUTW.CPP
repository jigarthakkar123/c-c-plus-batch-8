#include<stdio.h>
#include<conio.h>

void main()
{
	FILE *f;
	int i,num;
	clrscr();
	f=fopen("tops2.txt","w");
	for(i=0;i<10;i++)
	{
		putw(i,f);
	}
	fclose(f);
	f=fopen("tops2.txt","r");
	while(getw(f)!=EOF)
	{
		num=getw(f);
		printf("\nDtaa In File Is %d",num);
	}
	fclose(f);
	getch();
}
