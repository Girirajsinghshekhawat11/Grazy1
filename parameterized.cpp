#include<iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout<<"\n default constructor of base";
    }
    base(int n)
    {
        cout<<"\n parameterized of base"<<n;
    }
};
class derived : public base
{
public:
    derived(int num):base(num)
    {
        cout<<"\n parameterized constructor of base"<<num;
    }
};
int main()
{
    derived d(67);
}
