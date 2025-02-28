#include<stdio.h>
int main()
{
    int i,j,count=0;
    scanf("%d",&i);
    int arr[i];
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }
    for(j=0;j<i;j++)
    {
        if(arr[j]==0)
        count+=1;
    }
    for(j=0;j<i;j++)
    {
        if(arr[j]==0)
        continue;
        printf("%d ",arr[j]);
    }
    for(j=0;j<count;j++)
    {
        printf("0 ");
    }
    
}