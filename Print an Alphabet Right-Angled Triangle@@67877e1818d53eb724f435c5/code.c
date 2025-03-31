#include <stdio.h>
int main()
{
    int i,j,k,num;
    scanf("%d",&num);
    char alphabet='A';
    for(i=0;i<num;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",alphabet);
            alphabet++;
        }
    }
}