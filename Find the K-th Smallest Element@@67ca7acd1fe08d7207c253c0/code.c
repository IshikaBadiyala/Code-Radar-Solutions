int kthSmallest(int arr[],int n, int k)
{
    for(int j=0;j<n-1;j++)
    {
       for(int i=0;i<n-1-j;i++)
       {
        if(arr[k]>arr[k+1])
        {
            int temp=arr[k];
            arr[k]=arr[k+1];
            arr[k+1]=temp;
        }
       }
    }
return arr[k-1];

}