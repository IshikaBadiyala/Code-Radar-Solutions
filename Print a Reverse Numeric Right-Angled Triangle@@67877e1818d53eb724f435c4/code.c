#include<stdio.h>
int main()
{
    int i,j,k,num;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        for(j=1;j<=num;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}