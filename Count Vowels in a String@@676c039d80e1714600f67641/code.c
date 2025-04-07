#include<stdio.h>
#include<string.h>
int main()
{
    char arr[30];
    scanf("%s",arr);
    int count=strlen(arr);
    int str;
    for(int i=0;i<count;i++)
    {
        
        if(arr[i]=='A'|| arr[i]=='E'|| arr[i]=='I'|| arr[i]=='O'|| arr[i]=='U'|| arr[i]=='a'|| arr[i]=='e'|| arr[i]=='i'|| arr[i]=='o'|| arr[i]=='u')
        {
            str+=1;
        }
    }
    printf("%d",str);
}