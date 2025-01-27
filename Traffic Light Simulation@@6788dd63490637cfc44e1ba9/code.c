#include <stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    if(i=='R'||i=='r')
    {
        printf("Stop");
    }
    else if(i=='G')
    {
        printf("Go");
    }
    else if(i=='Y')
    {
        printf("Slow Down");
    }
    else
    {
     printf("Invalid input");
    }
}