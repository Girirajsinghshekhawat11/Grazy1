#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int num1,num2;
    fstream fout("c:/compuhelp/first.txt",ios::app);
    //fout.open("abc.txt";
    cout<<"enter two numbers";
    cin>>num1>>num2;
    fout<<endl<<num1<<" "<<num2;
    cout<<"data saved";
    fout.close();
}
