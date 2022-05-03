#include<iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout<<"\n default constructor of base";
    }
    ~base()
    {
        cout<<"\n defaulter of base";
    }
};
class derived : public base
{
public:
    derived()
    {
        cout<<"\n default constructor of derived";
    }
    ~derived()
    {
        cout<<"\n destructor of derived";
    }
};
int main()
{
    derived d;
}
