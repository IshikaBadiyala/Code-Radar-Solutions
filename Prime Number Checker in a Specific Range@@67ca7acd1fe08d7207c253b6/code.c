int printprimeInRange(int a,int b)
{
    int count;
    for(int i=0;i<=b;i++)
    {
        if(a%i==0)
        {
            count+=1;
        }
        if(count==2)
        {
            printf("%d",a);
        }
    }
    return 0;
   
}