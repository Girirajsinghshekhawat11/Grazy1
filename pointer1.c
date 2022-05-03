#include<stdio.h>
void main()
{
    int num1,num2,temp;
    int *aptr,*bptr,*cptr;
    printf("enter first number");
    scanf("%d",&num1);
    printf("enter second number");
    scanf("%d",&num2);
    printf("\n values before swaping is : num1=%d, num2=%d",num1,num2);
    aptr=&num1;
    bptr=&num2;
    temp=*aptr;
    *aptr=*bptr;
    *bptr=temp;
    printf("\n values after swaping is : num1=%d num2=%d",*aptr,*bptr);
}
