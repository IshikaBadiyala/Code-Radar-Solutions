#include<stdio.h>
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
        for(k=0;k<i;k++)
        {
            if(arr[j]<arr[k+1])
            replaced=arr[k];
        }
        printf("%d ",replaced);
    }
}