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
 
    largest=-1;
   
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
if(largest!=-1)
printf("%d",largest);
else
printf("-1");

   
}
