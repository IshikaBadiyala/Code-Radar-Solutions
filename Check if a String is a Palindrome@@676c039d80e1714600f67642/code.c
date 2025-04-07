#include<stdio.h>
#include<string.h>
int main()
{
    char arr[30];
    scanf("%s",arr);
    int count=strlen(arr);
    int palindrome=1;
    for(i=0;i<count;i++)
    {
        if(arr[i]!=arr[count-i-1])
        palindrome=0;
    }
if(palindrome)
{
    printf("Yes");
}
else
printf("No");
}