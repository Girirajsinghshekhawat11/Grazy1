#include<iostream>
using namespace std;
class demo
{
    int num1,num2;
public:
    friend class test;
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
class test
{
    demo dm;
public:
    void getdata()
    {
        dm.num1=100;
        dm.num2=200;
        cout<<"\n show num1="<<dm.num1<<"num2="<<dm.num2;
    }
    void sum()
    {
        cout<<"enter two numbers";
        cout<<"the sum is";
    }
};
int main()
{
    demo d;
    test t;
    d.input();
    d.display();
    t.getdata();
    t.sum();
}

