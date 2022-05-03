#include<stdio.h>
struct student
{
    int data;
    struct student *link;
}box1,box2,box3;
void main()
{
    box1.data=10;
    box1.link=&box2;
printf("%d ",box1.data);
    box2.data=20;
    box2.link=&box3;
printf("%d ",box2.data);
    box3.data=30;
    box3.link=NULL;
printf("%d ",box3.data);
}
