#include<stdio.h>
void main()
{
    char name[55];
    int i,ctr=0;
    printf("enter string");
    gets(name);
    printf("\n string is %s",name);
    for(i=0;name[i]!='\0';i++);
    printf("\n length of string is %d",i);
}
