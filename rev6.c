#include<stdio.h>
void main()
{
    int num[25],i,neg=0,pos=0,even=0,odd=0;
    printf("enter 25 elements of array");
    for(i=0;i<=24;i++)
        scanf("%d",&num[i]);
    for(i=0;i<=24;i++)
    {
        num[i]<0?neg++:(pos++);/* conditional operators*/
        num[i]%2?odd++:(even++);
    }
    printf("negative elements=%d\n",neg);
    printf("positive elements=%d\n",pos);
    printf("even elements=%d\n",even);
    printf("odd elements=%d\n",odd);
}
