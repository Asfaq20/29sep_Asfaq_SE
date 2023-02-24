#include<iostream>
using namespace std;
class student
{
	public:
		int x,y,z;
		 student()
		{
			cout<<endl<<"Enter value of x and y :"<<endl;
			cin>>x>>y;
			
		}
};
class add : public student
{
	public:
		add()
		{
		z=x+y;
		cout<<endl<<"Addition of x and y is:"<<endl<<z;
		}
};
class sub : public student
{
	public:
		sub()
		{
			z=x-y;
			cout<<endl<<"Substraction of y and z is:"<<endl<<z;
		}
};
class mul : public student
{
	public:
		mul()
		{
			z=x*y;
			cout<<endl<<"Multiplication of z and y is:"<<endl<<z;
		}
};
class div : public student
{
	public:
		div()
		{
			z=x/y;
			cout<<endl<<"Divission of y and d is :"<<endl<<z;
		}
};
int main ()
{
	add a1;
	sub s1;
	mul m1;
	div d1;
}
