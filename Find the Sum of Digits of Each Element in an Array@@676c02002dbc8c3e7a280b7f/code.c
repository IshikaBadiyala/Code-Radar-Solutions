#include<stdio.h>
int main()
{
    int i,j,sum,rev;
    scanf("%d",&i);
    int arr[i];
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }
   
    for(j=0;j<i;j++)
    {
        sum=0;
        while(arr[j]!=0)
        {rev=arr[j]%10;
        sum=sum+rev;
        arr[j]=arr[j]/10;
        }
        printf(" %d ",sum);
    }

   

}