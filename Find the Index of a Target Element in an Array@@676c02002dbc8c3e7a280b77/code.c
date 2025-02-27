#include<stdio.h>
int main()
{
    int i,j,k;
    scanf("%d",&i);
    int arr[i];
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }
    scanf("%d",&k);
    for(j=0;j<i;j++)
    {
      if(arr[j]==k)
      printf("%d",&arr[j]);
      return 0;
    }
    printf("-1");
    return 0;
}