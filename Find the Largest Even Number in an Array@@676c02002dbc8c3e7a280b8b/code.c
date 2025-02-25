#include<stdio.h>
int main()
{
    int i,j,largest;
    scanf("%d",&i);
    int arr[i];
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }
 
    largest=arr[0];
   
    for(j=0;j<i;j++)
    {
        if(largest<arr[j])
        {
           largest=arr[j];
        }
 
    }
    if(largest%2==0)
    printf("%d",largest);
    else
    printf("-1");
    return 0;
   
}
