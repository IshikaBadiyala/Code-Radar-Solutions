#include<stdio.h>
int main()
{
    int i,j,sum=0;
    scanf("%d",&i);
    int arr[i];
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }
    for(j=0;j<i;j++)
    {
        arr[j]%10;
        sum=sum+arr[j];
        arr[j]=arr[j]/10;
    }
    printf("%d",sum);

}