#include <stdio.h>

int main()
{
    float a,b,c,avg,sum;
    scanf("%f %f %f",&a,&b,&c);
    sum=a+b+c;
    avg=sum/3;
    printf("Average: %.2f",avg);
    return 0;
}