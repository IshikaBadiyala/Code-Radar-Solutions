#include <stdio.h>

int main()
{
    int N,i,multiply;
    scanf("%d",&N);
    for(i=0;i<=10;i++)
    {
       multiply=N*i;
       printf("%d*%d= %d",N,i,multiply);

    }
}