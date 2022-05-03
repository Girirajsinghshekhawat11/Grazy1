#include<iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout<<"the function is";
    }
};
class a
{
    void showa
    {
        cout<<"the function is showa";

    }
};
class b:virtual public a
{
public:

    void showb()
    {
        cout<<"the function is showb";
    }
};
class c : virtual public a
{
    void showc()
    {
        cout<<"the function is showc";
    }
};
class d : public b, public c
{
    void showd()
    {
        cout<<"the function is showd";
    }
};
int main()
{
    base b;
    b.showa();
    b.showb();
    b.showc();
    b.showd();
}
