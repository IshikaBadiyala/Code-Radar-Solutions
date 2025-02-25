#include<stdio.h>
int main()
{
    int i,j,k,count,primecount=0;
    scanf("%d",&i);
    int arr[i];
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }
    for(j=0;j<i;j++)
    {
        count=0;
     
        for(k=1;k<arr[j];k++)
        {
        if(arr[j]%k==0)
        count+=1;
        }
      
        if(count==2)
        primecount+=1;
    }
    printf("%d",primecount);
    return 0;
   
}