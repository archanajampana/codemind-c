#include<stdio.h>
int main()
{
    int n,r,s=0,p;
    scanf("%d",&n);
    p=n*n;
    while(p)
    {
    r=p%10;
    s=s+r;
    p=p/10;
    }
if(s==n)
{
    printf("Neon Number");
}
else
{
    printf("Not Neon Number");
}
    
}