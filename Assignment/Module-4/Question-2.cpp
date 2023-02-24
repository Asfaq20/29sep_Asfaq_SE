#include<iostream>
using namespace std;

template <class first> 
first swap(first e,first f)
{
	e=f;
	f=e+1;
	
	cout<<endl<<"Value of e is:"<<e;
	cout<<endl<<"Value of f is:"<<f;
	
	return 0;
}

int main()
{
	int x, w;
	swap(12,11);
	
	return 0;
}

