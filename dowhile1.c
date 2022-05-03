#include<stdio.h>
void main()
{
    int i,num,x=0,y=1,z=1;
    printf("enter any number:");
    scanf("%d",&num);
    printf("%d %d",x,y);
    do
    {
        z=x+y;
        printf("%d",z);
        x=y;
        y=z;
    }
    while(z<=(num-x));
}
