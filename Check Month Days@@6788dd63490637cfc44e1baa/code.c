#include <stdio.h>

int main()
{
    int i;
    scanf("%d",&i);
    if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
    {
        printf("%d",31);
    }
    else if(i==2)
    {
        printf("%d",28);
    }
    else
    {
       print("Invalid month");
    }
}