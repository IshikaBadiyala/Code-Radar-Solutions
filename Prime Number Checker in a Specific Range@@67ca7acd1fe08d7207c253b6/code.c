int printPrimesInRange(int a, int b)
{
    int count;
    for(int i=a;i<=b;i++)
    {
        count=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
              count+=1;
            }
        }
        if(count==2)
        {
            printf("%d ",i);
        }
    }
    printf("No prime numbers");
}