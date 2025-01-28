#include <stdio.h>

int main()
{
    int a,b,sum,diff,mulp,div;
    char ch;
    scanf("%d %d %c",&a,&b,&ch);
    if(ch=='+')
    {
        sum=a+b;
        printf("%d",sum);
    }
    else if(ch=='-')
    {
        diff=a-b;
        printf("%d",diff);
    }
    else if(ch='*')
    {
        mulp=a*b;
        printf("%d",mulp);
    }
    else if(ch=='/')
    {
        if(b!=0)
        {
                 div=a/b;
                 printf("%d",div);
        }
        
  
    else{
        printf("error");
    }
    }
}