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
    int isinc=1;
    int isdec=1;
    for(j=0;j<i;j++)
    {
        if(arr[j]>=arr[j+1])
        isinc=0;
        if(arr[j]<arr[j+1])
        isdec=0;    
    }
    if(isinc||isdec)
    {
        printf("Yes");
    }
    else
    printf("No");
}