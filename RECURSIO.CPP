#include<iostream.h>
#include<conio.h>

long int factorial(int n)
{
	if(n>=1)
	{
		return n*factorial(n-1);
	}
	else
	{
		return 1;
	}
}

void main()
{
	int n;
	clrscr();
	cout<<"\nEnter Number You Want To Know Factorial : ";
	cin>>n;
	cout<<"\nFactorial Of "<<n<<" Is : "<<factorial(n);
	getch();
}