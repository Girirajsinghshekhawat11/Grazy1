#include<stdio.h>
void main()
{
    int num1,num2,res;
    int value;
    printf("enter first number:");
    scanf("%d",&num1);
    printf("enter second number:");
    scanf("%d",&num2);
    printf("\n press 1 for addition");
    printf("\n press 2 for subtraction");
    printf("\n press 3 for division");
    printf("\n press 4 for multiplication");
    printf("\n press 5 for exit");
    printf("\n");
    scanf("%d",&value);
    switch(value)
    {
    case 1:
        res=num1+num2;
        printf("the sum is:%d",res);
        break;

    case 2:
        res=num1-num2;
        printf("the subtraction is:%d",res);
        break;

    case 3:
        res=num1/num2;
        printf("the division is:%d",res);
        break;

    case 4:
        res=num1*num2;
        printf("the multiplication is %d",res);
        break;

    default:
        printf("EXIT");
            }
}
