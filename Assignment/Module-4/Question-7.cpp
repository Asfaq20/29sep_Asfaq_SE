#include<iostream>
using namespace std;

class students
{
	public:
		int m;
		
		int sgetdata()
		{
			cout<<"Enter Roll Number of student:";
			cin>>m;
			cout<<" Roll Number is:"<<m;
			return 0;
		}
};

class test : public students
{
	public:
		int n;
		
		int tgetdata()
		{
			cout<<endl<<"Enter Marks in two subjects:";
			cin>>n;
			cout<<" b of two subjects is:"<<n;
			return 0;
		}
};

class result : public test
{
	public:
		int o;
		
		int rgetdata()
		{
			cout<<endl<<"Enter Total Marks in test:";
			cin>>o;
			cout<<" Total Marks of test:"<<o;
			return 0;
		}
};

int main()
{
	result a1;
	a1.sgetdata();
	a1.tgetdata();
	a1.rgetdata();
	return 0;
}
