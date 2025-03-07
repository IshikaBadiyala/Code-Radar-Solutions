#include<stdio.h>
#include<limits.h>
int main()
{
    int i,j,k,replaced;
    scanf("%d",&i);
    int arr[i];
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }
    for(j=0;j<i;j++)
    {
        for(k=j+1;k<i;k++)
        {
            if(arr[j+1]<arr[k+1])
            arr[j]=arr[j+1];
        }
      printf("%d",arr[j]);
    }
}