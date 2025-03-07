#include<stdio.h>
#include<math.h> // Required for abs function

int main()
{
    int i,j,k,diff,min,min1;
    scanf("%d",&i);
    int arr[i];
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }
    diff=abs(arr[0]-arr[1]); // Initialize diff with the absolute difference of the first two elements
    min = arr[0];
    min1 = arr[1];
    
    for(j=0;j<i;j++)
    { 
        for(k=j+1;k<i;k++)
        {
            if(diff>abs(arr[j]-arr[k])) // Use abs function to ensure positive difference
            {
                diff=abs(arr[j]-arr[k]);
                min=arr[j];
                min1=arr[k];
            }
        }
    }
    printf("%d %d\n",min,min1);

    return 0;
}
