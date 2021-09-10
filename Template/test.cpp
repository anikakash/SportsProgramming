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

   int number_of_sub, cr=0;
   dl cg = 0.0;
   cin>>number_of_sub;
   for(int i=0; i<number_of_sub; i++){
        dl cg_per_sub; cin>>cg_per_sub;
        int cr_per_sub; cin>>cr_per_sub;
        cr+=cr_per_sub;
        cg +=(cg_per_sub *cr_per_sub);
   }
   cout<<cg/cr;

    
      #ifdef anikakash
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
  #endif
   return 0;
}

