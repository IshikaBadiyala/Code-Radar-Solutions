#include<stdio.h>
int main()
{
    int i,j,n,k;
    scanf("%d",&i);
    int arr[i];
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }
    scanf("%d",&n);
    for(j=0;j<i-1;j++)
    {
        int found=0;
     for(k=j+1;k<i;k++)
     {
        if(arr[j]+arr[k]==n)
        {printf("%d %d\n",arr[j],arr[k]);
        found=1;
        break;
        }
     }
     if(isfound)
     break;
    }
    return 0;
}