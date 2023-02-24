#include<iostream>
using namespace std;
class overload
{
    public:
    int science (int x , int y)
    {
       
        cout<<endl<<"Addition of x and y is:"<<x+y;

        return 0;
    }
    int science (int n, double m)
    {
       
        cout<<endl<<"Substraction of n and m is:"<<n - m;

        return 0;
    }
    int science (double w, double z)
    {
       
         cout<<endl<<"Multiplication of w and z is:"<<w * z;

        return 1;
    }
    int science (double o, int p)
    {
      
        cout<<endl<<"Divission of o and p is:"<<o / p;

        return 1;
    }
};
int main()
{
    overload o1;
    o1.science(12, 23);
    o1.science(11,23.5);
    o1.science(23.5,33.2);
    o1.science(22.6,43);

    return 0;
}
