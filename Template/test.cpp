#include<bits/stdc++.h>
using namespace    std;
typedef long long int           ll;
typedef double                   dl;
int isPrime(int j)
{
  for(int i=2; i*i<=j; i++)
    if(j%i==0)return 0;
  return 1;
}
int main(){
    #ifdef anikakash
       clock_t tStart = clock();
       freopen("INPUT.txt","r",stdin);
       freopen("output.txt","w",stdout); 
  #endif

      int x = 7%5;
      cout<<x<<endl;
      x = 5-7%5;
      cout<<x<<endl;
    
      #ifdef anikakash
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
  #endif
   return 0;
}

