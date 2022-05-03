#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int num1,num2;
    fstream finout("c:/compuhelp/read.txt",ios::in);
    finout>>num1>>num2;
    cout<<num1<<" "<<num2;
    finout.close();
}
