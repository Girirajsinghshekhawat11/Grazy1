#include<stdio.h>
void main()
{
    int i,num,prod=1;
    printf("enter the number till you want to print the series");
    scanf("%d",&num);
    for(i=0;prod<=num;i++)
    {
        printf("%d",prod);
        prod=2*prod;
    }

}
