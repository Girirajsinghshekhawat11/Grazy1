#include<iostream>
using namespace std;
class maths
{
    int num1,num2,res;
public:
    void sum()
    {
        cout<<"enter two number";
        cin>>num1>>num2;
        res=num1+num2;
        cout<<"\n sum()="<<res;
    }
    /*void sum(int n1,int n2)
    {
        res=n1+n2;
        cout<<"\n sum(n1,n2)="<<res;
    }*/
    void sum(float x,float y)
    {
        float ans;
        ans=x+y;
        cout<<"\n sum(x,y)="<<ans;
    }
};
int main()
{
    maths m;
    m.sum();
    m.sum(12,34);
    m.sum(12.34,44.55);
}
