void selectionSort(char arr[],int n)
{
    for( char j=0;j<n-1;j++)
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
void printArray(char arr[],int n)
{
    for(char j=0;j<n;j++)
    {
        printf("%c", arr[j]);
    }
}