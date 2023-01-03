#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,sum,add,diff;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
      if(a[i]%2==0)
      {
          sum=sum+a[i];
      }
    }
      for(i=0;i<n;i++)
      {
      if(a[i]%2!=0)
      {
          add=add+a[i];
      }
      }
      
    printf("%d",abs(sum-add));
    
}