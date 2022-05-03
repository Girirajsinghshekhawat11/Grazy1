#include<stdio.h>
void main()
{
    int num;
    printf("enter your number");
    scanf("%d",&num);
    if(num>0)
    {
        printf("number is positive");
    }
    else if (num<0)
    {
        printf("number is negative");
    }
    else if (num=0)
    {
        printf("number is zero");
    }
}
