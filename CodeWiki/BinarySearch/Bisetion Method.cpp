double biset_method()
{
   double hi=1, lo=0;
   while(lo+EPS <hi)
   {
      double x = (lo+hi)/2;
      if(fun(lo) * fun(x) <=0)hi = x;
      else lo = x;
   }
   return (lo+hi)/2;
}