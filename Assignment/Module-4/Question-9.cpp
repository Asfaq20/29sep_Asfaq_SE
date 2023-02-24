#include<iostream>
using namespace std;
class no
{
    public:
    int x[20];
    int get()
    {
        cout<<"Enter the value of no:";
        cin>>x[20];
    }
    no operator+(no y)
    {
        no add;
        x[20] = add.x[20] + y.x[20];

        return add;
    }
    int data()
    {
        cout<<endl<<"Vlaue of no is:"<<x[20];
        return x[20];
    }
};
int main()
{
    no n1,n2;
    n1.get();
    n2.get();
    n1.data();
    n2.data();
    no n3;
    n3 = n1 + n2;
    cout<<endl<<"After addition :-\n";
    n3.data();

    return 0;

}
