#include<stdio.h>
int main()
{
    int a,b,c,i,j=0;
    scanf("%d%d%d",&a,&b,&c);
    for(i=a;i<=b;i++)
    {
       if(i%c==0)
       {
           j=j+1;
       }
    }
    
    printf("%d",j);
}