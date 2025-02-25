#include<stdio.h>
int miain()
{
    int i,j,sum=arr[0];
    scanf("%d",&i);
    int arr[i];
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }
    for(j=1;j<i;j++)
    {
          sum=sum+arr[j];
          printf("%d",sum);
    }

}