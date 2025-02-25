#include<stdio.h>
int main()
{
    int i,j,sum=0,median;
  
    scanf("%d",&i);
    int num[i]
    int size=sizeof(num)/sizeof(num[0]);
    for(j=0;j<i;j++)
    {
        scanf("%d",&num[j]);
    }
    for(j=0;j<i;j++)
    {
        sum=sum+num[j];
    }
    median=sum/size;
    printf("%d",median);
}