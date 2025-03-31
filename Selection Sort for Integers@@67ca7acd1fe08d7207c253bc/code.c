#include<limits.h>


int selectionSort(int arr[],int n)
{
  
    
    
    for(int j=0;j<n-1;j++)
    {
       int minidx=j;
        for(int k=j+1;k<n;k++)
        {
           if(arr[k]<arr[minidx])
           minidx=k;
        }
        int temp=arr[minidx];
        arr[minidx]=arr[j];
        arr[j]=temp;
    }

}
int printArray(int arr[],int n)
{
    for(int j=0;j<n;j++)
    {
        printf("%d ",arr[j]);
    }
}