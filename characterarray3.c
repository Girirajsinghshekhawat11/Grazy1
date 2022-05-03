#include<stdio.h>
void main()
{
    char name[20];
    int i,j,ctr=0;
    printf("entered string is:");
    gets(name);
    for(i=0;name[i]!='\0';i++);
   // for(j=i-1;j>=0;j--)
    {
        printf("%c",name[j]);
    }
}
