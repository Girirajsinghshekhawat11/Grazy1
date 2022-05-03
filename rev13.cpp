#include<iostream>
using namespace std;
class test
{
    int num1,num2;
public:
    void input()
    {
        cout<<"enter two numbers";
        cin>>num1>>num2;
    }
    void display()
    {
        cout<<"\n num1="<<num1<<"num2="<<num2;
    }
    test operator+(test t2)
    {
        test t3;
        t3.num1=num1+t2.num1;
        t3.num2=num2+t2.num2;
        return t3;

    }
};
int main()
{
    test t1,t2,t3;
    t1.input();
    t2.input();
    t3=t1+(t2);
    t3.display();
}
