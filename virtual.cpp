#include<iostream>
using namespace std;
class base
{
public:
    virtual void show()
    {
        cout<<"show of base";
    }
};
class derived : public base
{
public:
    void show()
    {
        cout<<"\n show of derived";
    }
};
int main()
{
    derived d;
    base*ptr;
    ptr=&d;
    ptr->show();
}
