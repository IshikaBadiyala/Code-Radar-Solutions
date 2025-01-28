#include <stdio.h>

int main()
{
    int a,b,num;
    scanf("%d %d",&a,&b);
    if((a%2==0&&b%2!=0)||(a%2!=0&&b%2==0))
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}