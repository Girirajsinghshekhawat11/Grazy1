#include<stdio.h>
void main()
{
    int i, num,a=0,b=1,c;
    printf("enter the number till which you want fiboncci series");
    scanf("%d",&num);
    printf("%d %d",a,b);
    for(i=0;i<=num;i++)
    {
        c=a+b;
        printf(" %d",c);
        a=b;
        b=c;
    }
}
