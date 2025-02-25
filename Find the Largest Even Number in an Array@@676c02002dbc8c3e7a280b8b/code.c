#include<stdio.h>
#include<limits.h>
int main()
{
    int i,j,isfound=0,largest=  INT_MIN;
    scanf("%d",&i);
    int arr[i];
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<i;j++)
    {
        if(arr[j]%2==0){
        isfound=1;
        if(largest<arr[j])
        {
            largest=arr[j];
        }
        }
    }
if(isfound)
printf("%d",largest);
else
printf("-1");
}
