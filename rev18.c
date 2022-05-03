#include<stdio.h>
void main()
{
    int arr[5],i,*ptr,sum=0;
    for(i=0;i<=5;i++)
    {
        printf("enter array elements");
        scanf("%d",&arr[i]);
    }
    printf("\n the sum of array elements is:");
    for(i=0;i<=4;i++)
    {
        ptr=&arr[i];
        sum=sum+(*ptr);
    }
    printf("%d",sum);
}
