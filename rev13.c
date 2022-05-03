#include<stdio.h>
int res;
int sum()
{
    int num1,num2;
    printf("\n enter first number");
    scanf("%d",&num1);
    printf("enter second number");
    scanf("%d",&num2);
    res=num1+num2;
    return res;
}

void main()
{
    printf("\ncalling sum function");
    res=sum();
    printf("the sum is %d",res);
}// end of main
