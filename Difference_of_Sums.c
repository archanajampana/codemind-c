#include<stdio.h>
int main()
{
    int q=0,i,s=0,n,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i;
        q=q+i*i;
    }
    d=(s*s)-q;
    printf("%d",d);
}