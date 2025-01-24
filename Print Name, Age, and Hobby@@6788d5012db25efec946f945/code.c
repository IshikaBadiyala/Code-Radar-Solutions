#include <stdio.h>

int main()
{
    char ch[30];
    int a;
    char c[30];
    scanf("%s %d %s",ch,&a,c);
    printf("Name: %s\n",ch);
    printf("Age: %d\n",a);
    printf("Hobby: %s",c);
    return 0;
}