#include<stdio.h>
void main()
{
    int m,n,i,res=1;
    printf("enter the value for m and n");
    scanf("%d%d",&m,&n);
    for(i=1;i<=n;i++)
    {
        res=res*m;
    }
    printf("%d",res);
}
