#include<iostream>
using namespace std;
class demo
{
public:
    static int num;
    //int;
public:
    static void init()
    {
        num=11;
        //x=5;
    }
    void show()
    {
        cout<<"\n value of num="<<num;
        num++;
    }
};int demo::num=100;
int main()
{
    demo d1,d2,d3;
    //d1.num=10;
    //demo::num=10;
    //d1.init();
    demo::init();
    d1.show();
    d2.show();
    d3.show();
}
