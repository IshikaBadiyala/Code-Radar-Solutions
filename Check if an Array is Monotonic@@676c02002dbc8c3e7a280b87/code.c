#include<stdio.h>
int main()
{
    int i,j;
    scanf("%d",&i);
    int arr[i];
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }
    int isinc=0;
    int isdec=0;
    for(j=0;j<i;j++)
    {
        if(arr[j]>=arr[j+1])
        isdec=1;
        if(arr[j]<=arr[j+1])
        isinc=1;    
    }
    if(isinc||isdec)
    {
        printf("YES");
    }
    else(isinc&&isdec)
    printf("NO");
}