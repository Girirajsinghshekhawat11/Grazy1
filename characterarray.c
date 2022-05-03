#include<stdio.h>
void main()
{
    char name[50];
    int i,ctr=0;
    printf("enter name");
    gets(name);
    printf("\n name is %s",name);
    for(i=0;name[i]!='\o';i++)
    {
        ctr++;
    }
    printf("\n length of string is %d",ctr);
}
