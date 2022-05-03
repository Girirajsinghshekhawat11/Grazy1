#include<iostream>
using namespace std;
class demo
{
    private:
    int num1,num2,res;
    public:
        void getdata()
        {
            cout<<"enter first number";
            cin>>num1;
            cout<<"enter second number";
            cin>>num2;
        }
        void sum()
        {
            res=num1+num2;
            cout<<"the result is"<<res;
        }
};
int main()
{
    demo d;
    d.getdata();
    d.sum();
}
