#include<stdio.h>
void main()
{
    int i,num,fact=1;
    printf("enter the number whose factorial you want to print");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
        printf("%d*",i);
    }
    printf("\b=%d", fact);
}
