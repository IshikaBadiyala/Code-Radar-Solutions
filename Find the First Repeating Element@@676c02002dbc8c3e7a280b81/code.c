#include<stdio.h>
int main()
{
    int i,j,k;
    scanf("%d",&i);
    int arr[i];
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }
    for(j=0;j<i-1;j++)
    {
        for(k=j+1;j<i;k++)
        {
            if(arr[j]==arr[k])
           
        }
        printf("%d",arr[j]);
    }

}

