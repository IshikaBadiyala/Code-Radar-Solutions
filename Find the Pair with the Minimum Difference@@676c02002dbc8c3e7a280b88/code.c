#include<stdio.h>
int main()
{
    int i,j,k,diff;
    scanf("%d",&i);
    int arr[i];
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }
    diff=(arr[j]-arr[j+1]);
    for(j=0;j<i;j++)
    { 
        
        for(k=j+1;k<i;k++)
        {
            if(diff>(arr[j]-arr[k]))
            diff=arr[j]-arr[k];
        }
    printf("%d %d",arr[j],arr[k]);
    }

}