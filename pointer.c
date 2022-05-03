#include<stdio.h>
void main()
{
    int num1,num2,res;
    int *aptr,*bptr,*cptr;
    printf("enter first number");
    scanf("%d",&num1);
    printf("enter second number");
    scanf("%d",&num2);
    aptr=&num1;
    bptr=&num2;
    cptr=&res;
    *cptr=(*aptr)+(*bptr);
    printf("\n sum is %d",*cptr);
}
