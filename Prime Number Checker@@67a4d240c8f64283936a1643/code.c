int isPrime(int num)
{
    int i, count=0;
    if(num<=1)
    {
        return 0;
    }
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
         {
            count+=1;
         }
    }
if(count==2)
{
    return 1;
}
else
{
    return 0;
}
}