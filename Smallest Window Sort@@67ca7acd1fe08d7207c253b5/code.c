 int findUnsortedSubarray(int arr[],int n)
 {
    for(int j=0;j<n-1;j++)
  {
    for( int k=0;k<n-1-j;k++)
    {
        if(arr[k]<arr[k+1])
        {
            int temp=arr[k];
            arr[k]=arr[k+1];
            arr[k+1]=temp;
        }
    }
  }
 }