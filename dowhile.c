#include<stdio.h>
void main()
{
    int num=1;
    {
        printf("%d",num);
        num++;
    }while(num>=5);
}
