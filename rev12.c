#include<stdio.h>
int n1;
int n2;
void sum(int n1,int n2){
int res;
res=n1+n2;
printf("%d",res);
}
void main()
{
    int n1,n2;
    printf("enter first number");
    scanf("%d",&n1);
    printf("enter second number");
    scanf("%d",&n2);
    sum(n1,n2);
}
