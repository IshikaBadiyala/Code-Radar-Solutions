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

    for(j=0;j<i-1;j++)
    {
        int max=INT_MIN;
        for(k=j+1;k<i;k++)
        {
         if(arr[k]>max)
         max=arr[k];
        }
    arr[j]=max;
    }
    arr[i-1]=-1;
    for(j=0;j<i;j++)
    {
        printf("%d",arr[j]);
    }
    return 0;
}