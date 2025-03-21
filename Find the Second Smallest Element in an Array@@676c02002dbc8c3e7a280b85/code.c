#include<stdio.h>
int main()
{
    int i,j,k;
    scanf("%d",&i);
    int arr[i];
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }
    if(i==1)
    {printf("-1");
    return 0;
    }
    for(j=0;j<i;j++)
    {
        for(k=0;k<i-j-1;k++)
        {
            if(arr[k]>arr[k+1])
            {
                int temp=arr[k];
                arr[k]=arr[k+1];
                arr[k+1]=temp;
            }
       }
    }
    int second_small=arr[1];
    for(j=0;j<i;j++)
    {
        if(arr[j]==arr[j+1])
       {second_small=arr[j+2];
       printf("%d",second_small);
       return 0;
       }
       else if(arr[j]!=arr[j+1])
       {
        printf("%d",second_small);
        return 0;
       }
        else
        {printf("-1");
        return 0;
        }
    }
}