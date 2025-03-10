int kthSmallest(int arr[],int n, int k)
{
    for(int j=0;j<n-1;j++)
    {
       for(int i=0;i<n-1-j;i++)
       {
        if(arr[i]>arr[i+1])
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
       }
    }
return arr[k-1];

}