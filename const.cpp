#include<iostream>
using namespace std;
class test
{
    int num;
public:
    /*void init()
    {
        num=0;
    }*/
    test()//default constructor
    {
        num=0;
    }
    void show()
    {
        num++;
        cout<<"\n function called"<<num<<"times";
    }
};
int main()
{
    test t;
    //t.init();
    t.show();
    t.show();
    t.show();
}
