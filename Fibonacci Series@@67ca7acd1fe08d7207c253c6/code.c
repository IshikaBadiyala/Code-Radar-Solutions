 int fibonacciSeries(int n)
 {
    int a=0,c,b=1;
    if(n==1)
  {
    printf("%d",a);
    return 0;
  }
       for (int i=1;i<=n;i++)
   {
      printf("%d ",a);
      c=a+b;
      a=b;
      b=c;
   }
}
