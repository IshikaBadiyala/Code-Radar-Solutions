#include<string.h>
#include<stdio.h>
int main()
{
    int i,j;
    char arr[30];
    char arr1[30];
   fgets(arr,sizeof(arr),stdin);
   scanf("%s",arr1);

    strcat(arr,arr1);
    printf("%s",arr);
}