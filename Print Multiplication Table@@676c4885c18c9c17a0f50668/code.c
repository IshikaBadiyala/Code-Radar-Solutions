#include <stdio.h>

int main()
{
    int N,i,multiply;
    scanf("%d",&N);
    for(i=1;i<=10;i++)
    {
       multiply=N*i;
       printf("\n%d X %d = %d",N,i,multiply);

    }
}