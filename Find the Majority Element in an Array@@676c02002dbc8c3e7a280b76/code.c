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
    if (i==1){
    printf("%d",arr[0]);
return 0;
    }
    for(j=0;j<i-1;j++)
    {
        count=0;
        for(k=0;k<i;k++)
        {
        if(arr[j]==arr[k])
        {
           count+=1;
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
