#include<iostream>
using namespace std;
class maths
{
private:
    int num1,num2,res;
public:
    void input()
    {
        cout<<"\nenter first number";
        cin>>num1;
        cout<<"enter second number";
        cin>>num2;
    }
    void sum(maths m1)
    {
        num1=m1.num1;
        num2=m1.num2;
        res=num1+num2;
        cout<<"\nthe sum is"<<res;
    }
};
int main()
{
    maths mt1,mt2;
    mt1.input();
    mt2.sum(mt1);
}
