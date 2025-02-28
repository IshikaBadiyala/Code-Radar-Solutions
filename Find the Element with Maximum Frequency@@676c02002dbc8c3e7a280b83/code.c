#include<stdio.h>
int main()
{
    int i,j,k,max_freq=0,max_element;
    scanf("%d",&i);
    int arr[i];
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }
    for(j=0;j<i-1;j++)
    { 
        int count=0;
        for(k=j+1;k<i;k++)
        {
            if(arr[j]==arr[k])
            {
                count++;
            } 
        }
     if(count>max_freq)
        {
            max_freq=count;
            max_element=arr[j];
        }
    
    }
    printf("%d",max_element);
   
}