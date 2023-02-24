#include<iostream>
using namespace std;
class asfaq
{
    int abc;
    public:
        asfaq()
        {
        cout<<"Enter the abc of asfaq:";
        cin>>abc;
        cout<<endl<<"abc of asfaq is:"<<abc;
        }
};
class rehan
{
    int dfg;
public:
    rehan()
    {
        cout<<"\nEnter rehan dfg:";
        cin>>dfg;
        cout<<endl<<"rehan dfg is:"<<dfg;
    }
};
class ayan : public asfaq , public rehan
{
    string nm;
    int age;
    public:
    student ()
    {
        cout<<endl<<"Enter your name:";
        cin>>nm;
        cout<<endl<<"Enter your age:";
        cin>>age;
        cout<<endl<<"Your name is:"<<nm;
        cout<<endl<<"Your age is:"<<age;
    }
};
int main()
{
	student s1;
    return 0;
}
