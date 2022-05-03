#include<stdio.h>
void main()
{
    int row,col,i=1;
    for(row=1;row<=3;row++)
    {
        for(col=1;col<=3;col++)
        {
            printf("%d",i);
            i++;
        }
        printf("\n");
    }
}
