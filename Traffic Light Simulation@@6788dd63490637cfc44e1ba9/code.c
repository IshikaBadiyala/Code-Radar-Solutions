#include <stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    if(i == 'R'||i == 'r')
    {
        printf("Stop\n");
    }
    else if(i == 'G'||i == 'g')
    {
        printf("Go");
    }
    else if(i == 'Y'||i == 'y')
    {
        printf("Slow Down");
    }
    else
    {
     printf("Invalid input");
    }
}