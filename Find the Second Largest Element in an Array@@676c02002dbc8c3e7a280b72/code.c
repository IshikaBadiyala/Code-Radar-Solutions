#include<stdio.h>
int main()
{
    int i,j,largest;
    scanf("%d",&i);
    int arr[i];
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[i]);
    }
    largest=arr[0];
    for(j=1;j<i;j++)
    {
        if(largest<arr[j])
        {
             largest=arr[j-1];
        }  
    }
    printf("%d",largest);
    return 0;
}