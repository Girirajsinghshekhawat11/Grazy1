#include<iostream>
using namespace std;
class base
{
public:
    base()

    {
        cout<<"default constructor of base";
    }
    base(int n)
    {
        cout<<"parameterized constructor of base"<<n;
    }
};
class derived : public base
{
public:
    derived()
    {
        cout<<"\ndefault constructor of derived";
    }
    derived(int num) : base(num)
    {
        cout<<"\nparameterized constructor of derived"<<num;
    }
};
int main()
{
    derived d(97);
}

