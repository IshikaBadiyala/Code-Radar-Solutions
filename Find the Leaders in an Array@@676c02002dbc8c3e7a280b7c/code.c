#include<stdio.h>
int main()
{
    int i,j,k,isfound=0;
    scanf("%d",&i);
    int arr[i];
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }

    for(j=0;j<i;j++)
    {
       for(k=j+1;j<i;j++)
      if(arr[j]<arr[k])
      {isfound=1;  
      }
      printf("%d",arr[j]);
    }
   
}