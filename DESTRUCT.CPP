#include<iostream.h>
#include<conio.h>

class Box
{
	public:
	Box()
	{
		cout<<"\nConstructor Called";
	}
	~Box()
	{
		cout<<"\nDestructor Called";
	}
};
void main()
{
	clrscr();
	Box b1,b2,b3;
	{
		Box b4;
	}
	{
		Box b5;
	}
	Box b6;
	getch();
}
