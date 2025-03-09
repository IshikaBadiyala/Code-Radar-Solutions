 int fibonacciSeries(int n)
 {
    int a,c,b;
    if(n==1)
    return 0;
       for (int i=1;i<=n;i++)
   {
      printf("%d",a);
      c=a+b;
      a=b;
      b=c;
   }
}
