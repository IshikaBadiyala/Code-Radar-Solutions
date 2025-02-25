#include<stdio.h>
int main()
{
    int i,j;
    scanf("%d",&i);
    int arr[i];
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }
    for(j=1;j<i;j++)
    {
        if(arr[j]>arr[j-1]&&arr[j]>arr[j+1])
        {
            printf("%d",arr[j]);
            return 0;
        }
    
    }
   printf("-1");
   return 0;
}