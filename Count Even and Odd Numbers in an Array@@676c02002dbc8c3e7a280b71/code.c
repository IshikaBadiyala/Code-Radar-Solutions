#include <stdio.h>

int main()
{
    int N,even_count,odd_count;
    scanf("%d",&N);
    int arr[N];
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++)
    {
        if(arr[i]%2==0)
        even_count++;
        else
        odd_count++;
    }
    printf("%d",even_count);
    printf("%d",odd_count);
}
