#include<iostream>
using namespace std;

class first
{
	public:
		int j, k;
		int input()
		{
			cout<<endl<<"Enter value of j and k:";
			cin>>j>>k;
			
		
			return 0;
		}
		
		friend int swap(first object);
};

int swap(first object)
{
	object.j = object.k;
	object.k = object.j-1;
	cout<<"After swaping values of j and k is:"<<object.j<<endl<<object.k;
	return 0;				
}

int main()
{
	first jk;
	jk.input();
	swap(jk);
	
	return 0;
}

