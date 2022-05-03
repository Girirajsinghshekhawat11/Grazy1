#include<stdio.h>
void main()
{
    int arr[5]={10,20,30,40,50};
    int *ptr,i;
    for(i=0;i<=4;i++)
    {
        ptr=&arr[i];
        printf("%d\n",*ptr);
    }
}
