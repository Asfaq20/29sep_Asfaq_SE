#include<iostream>
using namespace std;

class getdata
{
	public:
		int x, y, z;
		getdata()
		{
			cout<<"\nEnter value of x and y:"<<endl;
			cin>>x>>y;
		}
};

class addition : public getdata
{
	public:
		addition()
		{
			z = x + y;
			cout<<"Addition is:"<<endl<<z;
		}
};

class substraction : public getdata
{
	public:
		substraction()
		{
			z = x - y;
			cout<<"substraction is:"<<endl<<z;
		}
};

class multiplication : public getdata
{
	public:
		multiplication()
		{
			z = x * y;
			cout<<"multiplication is:"<<endl<<z;
		}
};

class division : public getdata
{
	public:
		division()
		{
			z = x / y;
			cout<<"division is:"<<endl<<z;
		} 
};

int main()
{
	addition add;
	substraction sub;
	multiplication mul;
	division div;
}
