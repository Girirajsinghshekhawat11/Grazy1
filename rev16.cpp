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
        cout<<"the sum is"<<res;
    }
};
int main()
{
    maths mt;
    mt.input();
    mt.sum();
}
