#include<iostream>
using namespace std;
class student
{
    private:
    int rollno;
    char name;
    int fee;
public:
    void input()
    {
        cout<<"enter your rollno";
        cin>>rollno;
        cout<<"enter your name";
        cin>>name;
        cout<<"enter your fee";
        cin>>fee;
    }
    void display()
    {
        cout<<"rollno= "<<rollno;
        cout<<"name= "<<name;
        cout<<"fee= "<<fee;
    }
};
int main()
{
    student s1;
    s1.input();
    s1.display();

}
