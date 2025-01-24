#include <stdio.h>

int main()
{
    char ch[30];
    char ch_1[30];
    int a;
    scanf("%s %d %s",ch,&a,ch_1);
    printf("Name: %s",ch);
    printf("Age: %d",a);
    printf("Hobby: %s",ch_1);
    return 0;
}