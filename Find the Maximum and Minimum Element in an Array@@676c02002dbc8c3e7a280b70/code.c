#include<stdio.h>
int main()
{
    int i,j,maximum,minimum;
    scanf("%d",&i);
    int arr[i];
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }
    maximum=arr[0];
    minimum=arr[0];
    for(j=1;j<i;j++)
    {
        if(maximum<arr[j])
        {
            maximum=arr[j];
        }
        if(minimum >arr[j])
        {
            minimum=arr[j];
        }
      
    }
      printf("%d %d",minimum,maximum);
        return 0;

}
