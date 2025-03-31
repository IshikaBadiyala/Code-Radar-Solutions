#include<stdio.h>
int main()
{
    int i,j,k,num;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        for(j=i+1;j<=2;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}