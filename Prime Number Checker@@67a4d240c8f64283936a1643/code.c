int is_prime(int num)
{
    if(num<=1)
    {
        return 0;
    }
    if(int i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
    return 1;
}