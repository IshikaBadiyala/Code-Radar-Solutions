int binarySearch(int arr[],int n,int target)
{
    int l=0,r=n-1;
    int mid=(l+r)/2;
    if(n==1)
   { printf("0");
    return 0;}
    while(l<r)
    {
        if(target=arr[mid])
        return mid;
        else if(target<arr[mid])
        r=mid-1;
        else
        l=mid+1;
    }
    return -1;
}