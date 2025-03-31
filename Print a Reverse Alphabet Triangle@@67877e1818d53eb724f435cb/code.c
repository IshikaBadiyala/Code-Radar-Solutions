#include<stdio.h>
int main()
{
    int i,j,k,num;
    scanf("%d",&num);
    char alphabet='A';
    for(i=0;i<num;i++)
    {
     for(j=i+1;j<=num;j++)
     {printf("%c",'A'+j-1);
     }
     printf("\n");
    }
}