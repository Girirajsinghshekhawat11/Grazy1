#include<stdio.h>
void main()
{
    int arr[5],i;
    printf("enter array elements");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n elements in reverse order are:\n");
    for(i=4;i>=0;i--)
    {
        printf("\n element is %d",arr[i]);
    }
}
