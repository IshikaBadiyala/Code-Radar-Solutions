#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a=b=c)
    {
        printf("Equilateral");
    }
    else if(a!=b!=c)
    {
        printf("Scalene");
    }
   else if(a==b&&b!=c&&a!=c)||(b==c&&c!=a&&b!=a)||(c==a&&a!=b&&c!=b)
   {
    printf("Isosceles");
   }
  
}