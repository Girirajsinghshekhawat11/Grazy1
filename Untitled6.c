#include<Stdio.h>
void main()
{
    int i, num;
    printf("enter any number");
    scanf("%d",&num);
    for(i=1;i<=num;i+=2)
    {
        printf("%d ",i);
    }

}
