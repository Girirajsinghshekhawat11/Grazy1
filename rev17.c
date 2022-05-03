#include<stdio.h>
void main()
{
    int arr[5],i,*ptr;
    for(i=0;i<5;i++)
    {
        printf("enter array elements");
        scanf("%d",&arr[i]);
    }
    printf("\n the reverse of elements are: \n");
    for(i=4;i>=0;i--)
    {
        ptr=&arr[i];
        printf("%d",*ptr);
    }
}
