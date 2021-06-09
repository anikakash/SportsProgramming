#include<bits/stdc++.h>
using namespace    std;

#define pb                      push_back
#define EPS                     1e-9
typedef long long int           ll;
typedef double                  dl;


double biset_method()
{
   double right=1, left=0;
   while(left+EPS <right)    //ESP for handel precision error handel;
   {
      double x = (left+right)/2;
      if(fun(left) * fun(x) <=0)right = x;
      else left = x;
   }
   return (left+right)/2;
}


int main()
{
   #ifdef anikakash
        clock_t tStart = clock();
        freopen("input.txt","r",stdin);
        freopen("out.txt","w",stdout);
   #endif
       

   #ifdef anikakash
      fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
   #endif
    return 0;
}