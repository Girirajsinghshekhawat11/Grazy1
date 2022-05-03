#include<iostream>
using namespace std;
class test
{
    int num;
public:
    test()//default constructor
    {
        num=10;
        cout<<"\n default constructor"<<num;
    }
    test(int num)
    {
        this->num=num;
        cout<<"\n parameterised constructor"<<num;
    }
    void show()
    {
        cout<<"\n show function"<<num;
    }
};
int main()
{
    test t(500);
    test t1;
    t.show();
}
