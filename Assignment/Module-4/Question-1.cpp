#include<iostream>
using namespace std;

class calculator
{
	float x,y;
	public :
		int result()
		{
			cout<<"enter first number:";
			cin>>x;
			cout<<"enter second number:";
			cin>>y;
		}
		float Add()
		{
			return x + y;
		}
		float Sub()
		{
			return x * y;
		}
		float Mul()
		{
			return x / y;
		}
		float div()
		{
			if(y == 0)
			cout<<"division by zero"<<endl;
			return 0;
		}
};
int main()
{
	int expression;
	calculator c;
	cout<<"\nenter 1 to Add 2 numbers"<<"\nenetr 2 to Sub 2 numbers"<<"\nenter 3 to Mul 2 numbers"<<"\nenter 4 to div 2 number"<<"\enter 0 to Exit";
	{
		cout<<"\nenter choice:";
		cin>>expression;
		switch(expression)
		{
			case 1:
				c.result();
				cout<<"result:"<<c.Add()<<endl;
				break;
				
			case 2:
				c.result();
				cout<<"result:"<<c.Sub()<<endl;
				break;
				
			case 3:
				c.result();
				cout<<"result:"<<c.Mul()<<endl;
				break;
				
			case 4:
				c.result();
				cout<<"result:"<<c.div()<<endl;
				break;				
		}
	}
	return 0;
}

