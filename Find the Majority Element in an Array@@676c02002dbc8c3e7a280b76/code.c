#include<stdio.h>
int main()
{
    int i,j,k,count;
    scanf("%d",&i);
    int arr[i];
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }
    if (arr[j]==1)
    printf("%d",arr[j]);
    for(j=0;j<i-1;j++)
    {
        count=1;
        for(k=j+1;k<i;k++)
        {
        if(arr[j]==arr[k])
        {
           count++;
        }
        }
        if(count>(i/2))
       { printf("%d",arr[j]);
        return 0;
       }
    }
    printf("-1");
    return 0;

}
