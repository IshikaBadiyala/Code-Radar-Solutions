#include<stdio.h>
#include<stdlib.h>
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
    {
        printf("-1");
        return 0;
    }
    for(j=0;j<i-1;j++)
    {
        for(k=0;k<i-1-j;k++)
        {
            if(arr[k]<arr[k+1])
            {
                int temp=arr[k];
                arr[k]=arr[k+1];
                arr[k+1]=temp;
            }
        }
    }
    int secondlargest=arr[1];
    for(j=0;j<i;j++)
    {
        if(arr[j]!=arr[j+1])
       { printf("%d",secondlargest);
        return 0;}
        else
        {printf("-1");
        break;}
    }
  
}