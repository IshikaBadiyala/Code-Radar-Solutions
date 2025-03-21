#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,k,temp;
    scanf("%d",&i);
    int arr[i];
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }

  for(j=0;j<i-1;j++)
  {
    for(k=0;k<i-1-j;k++)
    {
        if(arr[k]>arr[k+1])
        {
            temp=arr[k];
            arr[k]=arr[k+1];
            arr[k+1]=temp;
        }
    }
  }
  for(j=0;j<i;j++)
{
    arr[j]=abs(arr[j]);
}
int max= arr[0]*arr[1];
int max1=arr[i-1]*arr[i-2];
if(max>max1)
printf("%d",max);
else
printf("%d",max1);

}



