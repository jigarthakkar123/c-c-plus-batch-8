#include<iostream.h>
#include<conio.h>

class Tops
{
	int m,n,o;
	public:
		void getData(int a,int b,int c)
		{
			m=a;
			n=b;
			o=c;
		}
		void showData();
		void operator -()
		{
			m=-m;
			n=-n;
			o=-o;
		}
};
void Tops::showData()
{
	cout<<"\nM : "<<m;
	cout<<"\nN : "<<n;
	cout<<"\nO : "<<o;
}
void main()
{
	clrscr();
	Tops t1;
	t1.getData(10,-20,30);
	t1.showData();
	-t1;
	t1.showData();
	getch();
}