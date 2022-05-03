#include<iostream>
using namespace std;
class maths
{
private:
    int num1,num2,res;
public:
    void input()
    {
        cout<<"enter first number";
        cin>>num1;
        cout<<"enter second number";
        cin>>num2;
    }
    void sum()
    {
        res=num1+num2;
        cout<<"\nthe sum is"<<res;
    }
    void sub()
    {
        res=num1-num2;
        cout<<"\nthe sub is"<<res;
    }
    void division()
    {
        res=num1/num2;
        cout<<"\nthe division is"<<res;
    }
    void product()
    {
        res=num1*num2;
        cout<<"\nthe product is"<<res;
    }
};
int main()
{
    int n;
    cout<<"\npress 1 for sum";
    cout<<"\npress 2 for sub";
    cout<<"\npress 3 for division";
    cout<<"\npress 4 for product\n";
    cin>>n;
    maths mt;
    mt.input();
    if(n==1)
        {
    mt.sum();
        }
        else if(n==2)
            {
    mt.sub();
    }
    else if(n==3)
        {
    mt.division();
    }
    else if(n==4)
        {
    mt.product();
    }
}
