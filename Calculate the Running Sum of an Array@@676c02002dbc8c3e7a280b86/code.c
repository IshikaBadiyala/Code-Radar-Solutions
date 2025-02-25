#include<stdio.h>
int main()
{
    int i,j,sum;
    scanf("%d",&i);
    int arr[i];
 
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }
    sum=arr[0];
    for(j=1;j<i;j++)
    {
          sum=sum+arr[j];
          printf("%d",sum);
    }

}