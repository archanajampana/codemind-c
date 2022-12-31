#include<stdio.h>
int main()
{
    int days;
    scanf("%d",&days);
    int y,w;
    y=days/365;
    w=(days%365)/7;
    printf("%d
%d",y,w);
}