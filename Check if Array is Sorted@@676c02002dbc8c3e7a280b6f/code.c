#include <stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    int arr[i];
    for(i=0;i<=n;i++)
    {
        scanf("%d",arr[i]);
    }
    for(i=0;i<=n;i++)
    {
        if(arr[i]<arr[i-1])
        {
            printf("Sorted");
        }
        else
        {
            printf("Not Sorted");
        }
    }
    
}