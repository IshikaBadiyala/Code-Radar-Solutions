#include<stdio.h>
int main()
{
    int i,k,j,count=0;
    scanf("%d %d",&i,&k);
    int arr[i];
    for(j=0;j<i;j++)
    {
        scanf("%d",arr[j]);

    }
    for(j=0;j<i;j++)
    {
       if(arr[j]==k)
       count+=1
    }
    printf("%d",count);
}