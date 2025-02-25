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
        if(arr[j]%2==0)
        {
        if(largest<arr[j])
        {
           largest=arr[j];
           
        }
        }
 
    }

printf("%d",largest);
return 0;
printf("\n-1");
return 0;
   
}
