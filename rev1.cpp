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
    cout<<"\nshow function outside the class";
}
int main()
{
    demo d;
    d.show();
    show();
}
