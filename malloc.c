#include<stdio.h>
void main()
{
    int i,*ptr,n;
    printf("enter number of elements:");
    scanf("%d",&n);
    ptr=(int*)malloc(sizeof(int)*n);
    if(ptr!=NULL)
    {
        printf("memory allocation \n");
        for(i=0;i<n;i++)
        {
            scanf("%d",(ptr+i));
        }
        printf("elements of array:");
        for(i=0;i<n;i++)
        {
            printf("%d",*(ptr+i));
        }
    }
    else
    {
        printf("memory not allocated properly");
    }
}
