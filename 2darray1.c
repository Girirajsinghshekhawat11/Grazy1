#include<stdio.h>
void main()
{
    int arr[5]={10,20,30,40,50};
    int *ptr,i;
    ptr=&arr[0];
    for(i=0;i<=4;i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }
}
