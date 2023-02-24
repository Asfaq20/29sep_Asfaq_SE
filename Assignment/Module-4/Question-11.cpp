#include<iostream>
using namespace std;

class overloading
{
	public:
		int area(double t)
		{
			cout<<endl<<"Area of circle is:"<<3.14*t*t;
			return 0;	
		} 
		
		int area(double u, double v)
		{
			cout<<endl<<"Area of rectangle is:"<<u*v;
			return 0;
		}
		
		int area(int u, int w)
		{
			cout<<endl<<"Area of triangle is:"<<u*w/2;
			return 0;
		}
};

int main()
{
	overloading a1;
	a1.area(6.4);
	a1.area(2.2,2.2);
	a1.area(4,2);
	return 0;
}
