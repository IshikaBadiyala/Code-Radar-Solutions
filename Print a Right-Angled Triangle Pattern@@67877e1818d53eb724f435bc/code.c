#include <stdio.h>

int main()
{
    int num,i,j;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        for(j=1;j<=i+1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
   
}
