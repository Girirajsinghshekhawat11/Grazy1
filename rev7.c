#include<stdio.h>
void main()
{
    char name[30];
    int i;
    printf("enter a string");
    gets(name);
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]>=97 && name[i]<=122)
        {
            name[i]=name[i]-32;
        }
    }
    puts(name);
}
