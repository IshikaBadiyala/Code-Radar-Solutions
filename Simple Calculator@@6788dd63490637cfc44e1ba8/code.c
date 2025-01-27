#include <stdio.h>

int main()
{
    int num,num2;
    char op;
    scanf("%d %d %c",&num,&num2,&op);
    switch(op)
    {
        case '+':
        printf("%d\n",num+num2);
        break;
        case '-':
        printf("%d\n",num-num2);
        break;
        case 3 '*':
        printf("%d\n",num*num2);
        break;
        case 4 '/':
        printf("%d",num/num2);
        break;
    
        default:
        printf("error");
      
    }
    return 0;
    

}