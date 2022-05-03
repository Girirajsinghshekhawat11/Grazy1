#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int num1,num2;
    ofstream fout;
    fout.open("abc.txt");
    cout<<"enter two numbers";
    cin>>num1>>num2;
    fout<<num1<<" "<<num2;
    cout<<"data saved";
    fout.close();
}
