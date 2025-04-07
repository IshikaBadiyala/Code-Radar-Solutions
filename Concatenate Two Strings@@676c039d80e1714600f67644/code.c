#include<string.h>
int main()
{
    int i,j;
    char arr[30];
    char arr1[30];
    scanf("%s",arr);
    scanf("%s",arr1);
    strcat(arr,arr1);
    printf("%s",arr);
}