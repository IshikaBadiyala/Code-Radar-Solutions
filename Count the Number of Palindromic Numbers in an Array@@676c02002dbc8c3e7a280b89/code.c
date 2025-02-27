#include<stdio.h>
int main()
{
    int i,j,sum,rev,temp,count=0;
    scanf("%d",&i);
    int arr[i];
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }
   
    for(j=0;j<i;j++)
    {
        arr[j]==temp;
        sum=0;
        while (arr[j]!=0)
       { rev=arr[j]%10;
        sum=sum+rev*10;
        arr[j]=arr[j]/10;
       }
       if(temp==rev)
       count+=1;
    }
    printf("%d",count);

}