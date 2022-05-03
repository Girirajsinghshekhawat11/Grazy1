#include<stdio.h>
void main()
{
    char name[40];
    int i,ctr=0;
    printf("enter name");
    gets(name);
    printf("\n my name is %s",name);
    for(i=0;name[i]!='\o';i++)
    {
        ctr++;
    }
    printf("\n length of string is %d",ctr);
}
