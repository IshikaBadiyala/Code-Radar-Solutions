#include <stdio.h>

int main()
{
    char ch[30],ch_1[30];
    int a;
    scanf("%c %d %c",&ch,&a,&ch_1);
    printf("Name: %c",ch);
    printf("Age: %d",a);
    printf("Hobby: %ch_1",ch_1);
    return 0;
}