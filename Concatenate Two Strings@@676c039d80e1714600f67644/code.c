#include<string.h>
#include<stdio.h>
int main()
{
    int i,j;
    char arr[50];
    char arr1[50];
   fgets(arr,sizeof(arr),stdin);
  fgets(arr1,sizeof(arr1),stdin);

    arr[strcspn(arr,'\n')]=0;
    arr1[strcspn(arr1,'\n')]=0;
    strcat(arr,arr1);
    printf("%s",arr);
}