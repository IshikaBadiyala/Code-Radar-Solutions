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
    if(i==1)
    {printf("%d",arr[0]);
    return 0;
    }
    if(arr[0]>arr[1])
    {
        printf("%d",arr[0]);
        return 0;
    }
    for(j=1;j<i;j++)
    {
        if(arr[j]>arr[j-1]&&arr[j]>arr[j+1])
        {
            printf("%d",arr[j]);
            return 0;
        }

    }
    if(arr[i-1]>arr[j-2])
    {
        printf("%d",arr[i-1]);
        return 0;
    }
   printf("-1");
   return 0;
}