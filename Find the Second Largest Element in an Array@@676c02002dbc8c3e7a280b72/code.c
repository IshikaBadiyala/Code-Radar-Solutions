#include<stdio.h>
#include<limits.h>
    int main()
    {
        int i,n,j;
        int max=INT_MIN;
        int min=INT_MIN;
        scanf("%d",&n);
        int arr[n];
        if(i==1)
        {
            printf("-1");
            return 0;
        }
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=0;i<n;i++)
        {
           if(max<arr[i])
           {
            min=max;
            max=arr[i];
           }
           else if(min<arr[i]&& max!=arr[i])
           {
               min=arr[i];
           }
        }
        printf("%d",min);
    }