#include<stdio.h>
void main()
{
    int i, num, sum=0;
    printf("enter the number whose sum of series you want to print");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        sum=sum+i;
        printf("%d+",i);
    }
    printf("\b=%d",sum);
}
