#include<stdio.h>
int main()
{
    int i,j,k,isfound=1;
    scanf("%d",&i);
    int arr[i];
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }

    for(j=0;j<i;j++)
    {
      for(k=j+1;k<i;k++)
      {
        if(arr[j]<arr[k])
        isfound=0;
      }
      if(isfound==0)
      printf("%d",arr[j]);
    }
}