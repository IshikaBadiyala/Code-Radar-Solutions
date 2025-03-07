int isPrime(int num)
{
    int i, count=0;
    if(num<=1)
    {
        return 0;
    }
    for(i=2;i<=num;i++)
    {
        if(num%i==0)
       return 0;   
    }
return 1;
}