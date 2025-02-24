#include<stdio.h>
int main()
{
    int i,j;
    scanf("%d",&i);
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=1;j<i;j++)
    {
        if(arr[j]<arr[j-1])
        printf("Non Sorted\n");
        return 0;
    }
    printf("Sorted");
}