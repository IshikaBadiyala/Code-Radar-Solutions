#include<stdio.h>
#include<limits.h>


int main()
{
    int i,j,largest=INT_MIN,secondlarg= INT_MIN,isfound=0;
    scanf("%d",&i);
    int arr[i];
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }
 
    for(j=1;j<i;j++)
    {
        if(largest<arr[j])
        {
           largest=arr[j];
        }  
    }

    for(j=0;j<i;j++)
    {
        if(arr[j]>secondlarg &&arr[j]!=largest)
       { secondlarg=arr[j];
        isfound=1;
       }
    }
    if(isfound)
    printf("%d\n",largest*secondlarg);
  else
  printf("-1\n");
}