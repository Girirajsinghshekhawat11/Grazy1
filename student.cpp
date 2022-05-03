#include<iostream>
using namespace std;
class student
{
    private:
    int rollno;
    char name[10];
    int fee;
public:
    void input()
    {
        cout<<"enter your rollno";
        cin>>rollno;
        cout<<"enter your fee";
        cin>>fee;
        cout<<"enter your name";
        cin>>name;
    }
    void display()
    {
        cout<<"\nrollno= "<<rollno;
        cout<<"\nname= "<<name;
        cout<<"\nfee= "<<fee;
    }
};
int main()
{
    student s1;
    s1.input();
    s1.display();

}
