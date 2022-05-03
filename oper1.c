#include<stdio.h>
void main()
{
    int marks;
    printf("enter your mark");
    scanf("%d",& marks);
    if(marks>80 && marks<=100)
    {
        printf("a grade you are pass");
    }
    else if(marks>60 && marks<=80)
    {
        printf("\n b grade you are pass");
    }
    else if(marks>40 && marks<=60)
    {
        printf("c grade you are pass");
    }
    else if(marks<=40 && marks>=0);
    {
        printf("you are fail");
    }
}
