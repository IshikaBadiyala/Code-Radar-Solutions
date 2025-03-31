#include <stdio.h>
int main()
{
    int i,j,k,num;
    scanf("%d",&num);
    char alphabet='A';
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",'A'+j-1);
        }
        printf("\n");
    }
}