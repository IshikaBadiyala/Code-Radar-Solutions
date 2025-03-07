#include<stdio.h>
int main()
{
    int i,j,n,k;
    scanf("%d",&i);
    int arr[i];
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&n);
    for(j=0;j<i-1;j++)
    {
     for(k=j+1;k<i;k++)
     {
        if(arr[j]+arr[k]==n)
        printf("%d %d",arr[j],arr[k]);
     }
    }
    return 0;
}