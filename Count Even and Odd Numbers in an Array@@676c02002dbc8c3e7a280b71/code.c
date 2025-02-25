#include<stdio.h>
int main()
{
    int i,j,even_count=0,odd_count=0;
    scanf("%d",i);
    int arr[i];
    for(j=0;j<i;j++)
    {
        scanf("%d",arr[j]);
    }
    for(j=0;j<i;j++)
    {
        if(arr[j]%2==0)
        {
            even_count+=1;
        }
        else
        {
            odd_count+=1;
        }
    }
    printf("%d %d",even_count,odd_count);
    return 0;
}
