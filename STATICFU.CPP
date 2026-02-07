#include<iostream.h>
#include<conio.h>

class StaticFunction
{
		static int a;
	public:
		static void math(int x)
		{
			cout<<"\nA : "<<a;
			cout<<"\nX : "<<x;
		}
};
int StaticFunction::a=10;
void main()
{
	clrscr();
	StaticFunction::math(12);
	getch();
}