#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,diff,min,min1;
    scanf("%d",&i);
    int arr[i];
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }
    diff=abs(arr[j]-arr[j+1]);
    for(j=0;j<i;j++)
    { 
        
        for(k=j+1;k<i;k++)
        {
            if(diff>(arr[j]-arr[k]))
            {diff=arr[j]-arr[k];
            min=arr[j];
            min1=arr[k];
            }
        }
    }
    printf("%d %d",min,min1);

}