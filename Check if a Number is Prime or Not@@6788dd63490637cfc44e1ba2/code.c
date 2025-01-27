#include <stdio.h>

int main()
{
    int i,j,count=0;
    scanf("%d",&i);
    if(i<=1)
    {
        printf("Not Prime\n");
    }
    for(j=1;j<=i;j++)
    {
         if(j%i==0)
         {
            count++;
         }
    }
    if(count==2)
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not Prime");
    }
   
}