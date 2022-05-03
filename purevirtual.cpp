#include<iostream>
using namespace std;
class shape//abstract class
{
public:
    virtual void area()=0;//do nothing function
};
class circle : public shape
{
    float pie,r,ar;
public:
    circle()
    {
        pie=3.14;
        cout<<"enter radius";
        cin>>r;
    }
    void area()
    {
        ar=pie*r*r;
        cout<<"\n area of circle is"<<ar;
    }
};
class square : public shape
{
    int side,ar;
public:
    square()
    {
        cout<<"\nenter side";
        cin>>side;
    }
    void area()
    {
        ar=side*side;
        cout<<"\n area of square is"<<ar;
    }
};
int main()
{
    circle cir;
    cir.area();
    square sq;
    sq.area();
}
