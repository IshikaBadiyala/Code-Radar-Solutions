#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

int main()
{
    int i,j,largest=INT_MIN,secondlarg= INT_MIN,isfound;
    scanf("%d",&i);
    int arr[i];
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }
    if (i==1)
    {printf("-1");
    return 0;
    }
   
    largest=arr[0];
    for(j=1;j<i;j++)
    {
        if(largest<arr[j])
        {
           largest=abs(arr[j]);
        }  
    }
    isfound=0;
    for(j=0;j<i;j++)
    {
        if(arr[j]>secondlarg &&arr[j]!=largest)
       { secondlarg=abs(arr[j]);
        isfound=1;
       }
    }
    if(isfound)
    printf("%d\n",largest*secondlarg);
  else
  printf("-1\n");
}