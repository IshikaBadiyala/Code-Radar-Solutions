#include <stdio.h>

int main()
{
    int i,j,count=0;
    scanf("%d",&i);
    for(j=1;j<=i/2;j++)
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