#include<stdio.h>
int main()
{
    int i,j,count;
    scanf("%d",&i);
    int arr[i];
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }
    for(j=0;j<i-1;j++)
    {
        count=1
        for(k=j+1;k<i;k++)
        {
            if(arr[j]==arr[k])
            count+=1;
        }
     printf("%d %d",arr[j],count);
    }
   
}
