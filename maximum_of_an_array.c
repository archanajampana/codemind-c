#include<stdio.h>
int main()
{
    int n,i,j,swap;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<(n-1);j++)
        {
            if(a[j]>a[j+1])
            {
                swap=a[j];
                a[j]=a[j+1];
                a[j+1]=swap;
            }
        }
    }
    for(i=0;i<1;i++)
    {
    printf("%d",a[n-1]);
    }
}