#include<iostream.h>
#include<conio.h>

class A
{
	public:
	virtual void show()=0;
};
class B:public A
{
	public:
		void show()
		{
			cout<<"\nShow Created In B Class. Declared In A Class";
		}
		void display()
		{
			cout<<"\nDisplay From B";
		}
};
void main()
{
	clrscr();
	B b1;
	b1.show();
	b1.display();
	getch();
}