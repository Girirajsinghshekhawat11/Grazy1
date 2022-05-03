#include<iostream>
using namespace std;
class base
{
public:
    base()

    {
        cout<<"default constructor of base";
    }
    ~base()
    {
        cout<<"\ndestructor of base";
    }
};
class derived : public base
{
public:
    derived()
    {
        cout<<"\ndefault constructor of derived";
    }
    ~derived()
    {
        cout<<"\ndestructor of derived";

    }
};
int main()
{
    derived d;
}
