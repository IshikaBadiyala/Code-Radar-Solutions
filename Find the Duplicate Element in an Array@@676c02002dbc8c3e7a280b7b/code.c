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
    for(j=0;j<i-1;j++)
    {
        for(k=j+1;k<i;k++)
        {
            if(arr[k]==arr[j]) 

           { printf("%d",arr[j]);
             break;
           }
        }

        }
    }
 