#include<stdio.h>
int main()
{
    int i,j,count=0,primecount=0;
    scanf("%d",&i);
    int arr[i];
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }
    for(j=0;j<i;j++)
    {
        if(arr[j]%2==0)
        count+=1;
        {
            if (count==2)
            primecount+=1;
        }
    
    }
    printf("%d",primecount);
    return 0;
   
}