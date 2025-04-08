#include<stdio.h>
int main()
{
    char str[100];
    fgets(str,sizeof(str),stdin);
    int word=0;
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]==' '){
        word++;
        }
        i++;
    }
    printf("%d",word);

}