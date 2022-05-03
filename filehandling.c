#include<stdio.h>
struct student
{
    char name[15];
    int rollno;
    int fee;
}object;
void main()
{
    FILE *fptr;
    fptr=fopen("c:\\compuhelp\\sept.txt","w");
    printf("enter name");
    scanf("%s",object.name);
    printf("enter rollno");
    scanf("%d",&object.rollno);
    printf("enter fee");
    scanf("%d",&object.fee);
    fprintf(fptr,"%s %d %d",object.name,object.rollno,object.fee);
    fclose(fptr);
}
