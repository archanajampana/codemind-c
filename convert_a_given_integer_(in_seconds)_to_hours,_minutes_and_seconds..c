#include<stdio.h>
int main()
{
    int sec;
    scanf("%d",&sec);
    float H,M,S;
    H=sec/3600;
    M=(sec%3600)/60;
    S=(sec%3600)%60;
    printf("H:M:S-%0.0f:%0.0f:%0.0f",H,M,S);
    
    
}