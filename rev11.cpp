#include<iostream>
using namespace std;
class demo
{
    int num1,num2;
public:
    friend void show();
    void input()
    {
        cout<<"enter two numbers";
        cin>>num1>>num2;
    }
    void display()
    {
        cout<<"\n num1="<<num1;
        cout<<"\n num2="<<num2;
    }
};// end of class
void show()
{
    demo dm;
    dm.num1=100;
    dm.num2=200;
    cout<<"\nshow num1="<<dm.num1<<"\nshow num2="<<dm.num2;
}
int main()
{
    demo d;
    d.input();
    d.display();
    show();
}
