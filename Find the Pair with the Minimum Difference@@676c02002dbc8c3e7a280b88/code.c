#include<stdio.h>
#include<stdlib.h> 

int main()
{
    int i,j,k,diff,min,min1;
    scanf("%d",&i);
    int arr[i];
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }
    if (i==1)
    {
        printf("-1");
        return 0;
    }
    diff=abs(arr[0]-arr[1]); 
    min = arr[0];
    min1 = arr[1];
    
    for(j=0;j<i;j++)
    { 
        for(k=j+1;k<i;k++)
        {
            if(diff>=abs(arr[j]-arr[k])) 
            {
                diff=abs(arr[j]-arr[k]);
                min=arr[k];
                min1=arr[j];
            }
        }
    }
    printf("%d %d\n",min,min1);

    return 0;
}
