#include<iostream>
using namespace std;
class demo
{
public:
    void show();
};
inline void demo::show()
{
    cout<<"\n show of class";
}
void show()
{
    cout<<"\n show function outside the class";
}
int main()
{
    demo d;
    d.show();
    show();
}
