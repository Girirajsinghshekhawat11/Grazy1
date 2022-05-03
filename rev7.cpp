#include<iostream>
using namespace std;
class student
{
private:
    int rollno,sum,i;
    float mark[5],percent;
public:
    void getData()
    {sum=0;
        cout<<"enter your rollno";
        cin>>rollno;
        for(i=0;i<=4;i++)
        {
        cout<<"enter your mark";
        cin>>mark[i];
        sum=sum+mark[i];
        }
    }
    void per()
    {
        percent=sum/5;
        cout<<"\n percentage is "<<percent;
    }
};
int main()
{
student st[5];
int i;
for(i=0;i<=4;i++)
{
st[i].getData();
st[i].per();
cout<<endl<<endl;
}
}
