#include<stdio.h>
#include<limits.h>
int main()
{
    int i,j,smallest,isfound=0,second=INT_MAX;
    scanf("%d",&i);
    int arr[i];
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }
    smallest=arr[0];
    for(j=0;j<i;j++)
    {
       if(smallest >arr[j])
       smallest=arr[j];
    }
    for(j=0;j<i;j++)
    {
        if(arr[j]<second && arr[j]!=smallest)
        {second=arr[j];
        isfound=1;
        }
    }
    if(isfound)
    printf("%d",second);
    else
    printf("-1");

}