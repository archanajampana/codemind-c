#include<stdio.h>
int length(float height)
{
    float centi;
    centi=2.54*height;
    printf("%0.2f",centi);
    return centi;
}
int main()
  {  float height;
    scanf("%f",&height);
    length(height);
}