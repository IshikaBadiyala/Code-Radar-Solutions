#include <stdio.h>

int main()
{
    int i;
    scanf("%d",&i);
    if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
    {
        printf("31\n");
    }
    else if(i==2)
    {
        printf("28\n");
    }
    else
    {
       print("Invalid month");
    }
}