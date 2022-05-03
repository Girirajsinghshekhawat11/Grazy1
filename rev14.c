#include<stdio.h>
struct student
{
    char name[10];
    int rollno;
    float fee;
};
void main()
{
    struct student st[4];//array of structure
    int i;
    for(i=0;i<4;i++)
    {
    printf("enter name");
    scanf("%s",st[i].name);
    printf("enter rollno");
    scanf("%d",&st[i].rollno);
    printf("enter fee");
    scanf("%f",&st[i].fee);
    }
    for(i=0;i<4;i++)
    {
    printf("\n name is %s",st[i].name);
    printf("\n rollno is %d",st[i].rollno);
    printf("\n fee is %f",st[i].fee);
    }
}
