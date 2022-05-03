#include<iostream>
using namespace std;
class base
{
    int num;
public:
    void show()
    {
        num=100;
        cout<<"\n display of base"<<num;
    }
};
class derived : public base
{
    int n;
public:
    void show()
    {
        n=500;
        cout<<"\n show of derived"<<n;
    }
};
int main()
{
    derived d;
    d.show();
    d.base::show();//whem there is same name function in both classes
}

