#include<stdlib.h>
int insertionSort(int arr[],int n)
{
    for(int j=0;j<n;j++)
    {
        arr[j]==abs(arr[j]);
    }
    for( int j=0;j<n-1;j++)
  {
    for(char k=0;k<n-1-j;k++)
    {
        if(arr[k]>arr[k+1])
        {
           char temp=arr[k];
            arr[k]=arr[k+1];
            arr[k+1]=temp;
        }
    }
  }
}
int printArray(int arr[],int n)
{
    for(char j=0;j<n;j++)
    {
        printf("%d ", arr[j]);
    }
}