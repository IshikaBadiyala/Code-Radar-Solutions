#include<stdio.h>
int main()
{
    int i,j,k,isfound;
    scanf("%d",&i);
    int arr[i];
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }
    isfound=0;
    for(j=0;j<i-1;j++)
    {
        for(k=j+1;j<i;k++)
        {
            if(arr[j]==arr[k])
          {
            printf("%d",arr[j]);
             break;
          }
        }
     
    }
    printf("-1");
    return 0;



}

