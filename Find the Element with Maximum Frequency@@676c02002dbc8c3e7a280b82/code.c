#include<stdio.h>
int main()
{
    int i,j,k,count=0;
    scanf("%d",&i);
    int arr[i];
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<i-1;j++)
    {
        for(k=j+1;k<i;k++)
        {
            if(arr[k]==arr[j])
            {
                count+=1;
            }
        }
        if(count>=3)
        printf("%d",arr[j]);
    }
   
}