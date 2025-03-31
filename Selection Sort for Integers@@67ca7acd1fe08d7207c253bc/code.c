#include<limits.h>


int selectionSort(int arr[],int n)
{
    int min=INT_MIN;
    int minidx=0;
    
    for(int j=0;j<n-1;j++)
    {
        for(int k=j;k<n-1;k++)
        {
           if(min<arr[k])
           min=arr[k];
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