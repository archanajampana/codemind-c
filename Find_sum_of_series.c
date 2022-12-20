#include<stdio.h>
int main()
{
float a=1,d=1,n;
float i,r=0;
scanf("%f",&n);
for(i=1;i<=n;i++)
{
    r=(1/i)+r;
}
printf("%0.2f",r);
}