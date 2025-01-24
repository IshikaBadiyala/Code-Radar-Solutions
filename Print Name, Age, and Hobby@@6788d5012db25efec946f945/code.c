#include <stdio.h>

int main()
{
    char ch[30];
    int a;
    char c[30];
    scanf("%s %d %s",ch,&a,c);
    printf("Name: %s",ch);
    printf("Age: %d",a);
    printf("Hobby: %s",c);
    return 0;
}