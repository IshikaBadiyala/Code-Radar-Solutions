#include<stdio.h>
int main()
{
    int i,j;
    int ispalindrome=1;
    scanf("%d",&i);
    int arr[i];
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);

    }
    for(j=0;j<i;j++)
    {
        if(arr[j]==arr[i-j-1])
        {ispalindrome=0;
        break;
        }
    }
    if(ispalindrome)
    printf("NO");
    else
    printf("YES");
}