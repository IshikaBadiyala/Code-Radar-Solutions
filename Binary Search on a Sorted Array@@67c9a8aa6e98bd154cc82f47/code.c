int binarySearch(int arr[],int n,int target)
{
    int l=0,r=n-1;
    int mid=(l+r)/2;
    while(l<r)
    {
        if(target=a[mid])
        return mid;
        else if(target<a[mid])
        r=mid-1;
        else
        l=mid+1;
    }
    return -1;
}