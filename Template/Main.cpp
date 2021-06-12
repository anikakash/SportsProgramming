#include<bits/stdc++.h>
using namespace    std;

#define flush                   cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define fasterio                ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                      cout<<endl;
#define pi                      acos(-1.0) //3.1415926535897932384626
#define dpoint(x)               fixed<<setprecision(x)
#define debug(x)                cout<<x<<endl;
#define pb                      push_back
#define mx                      10000007
#define EPS                     1e-9
typedef long long int           ll;
typedef double                  dl;
typedef unsigned long long      ul;

// --------------------------Pre made Functions & Proto Type--------------------------//
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}
int gcd(int a, int b){ int x ; return x = __gcd(a, b);}
int lcm(int a, int b){int y; return y = ((a)*((b)/gcd(a,b)));}

 int t;
 dl fun(int mid)
 {
   dl ans = 0.0;
      for(int i=1; i<=t; i++)
         ans+= vce[i]/pow((1+mid),i);
      return ans-vec[0];
 }
int main()
{
   #ifdef anikakash
        clock_t tStart = clock();
        freopen("input.txt","r",stdin);
        freopen("ot.txt","w",stdout);
   #endif
        
  
   cin>>t;
   for(int i=1; i<=t; i++)
   {
      int x = t+1;
      vector<int>vec;
      while(x--)
      {
         int x;
         cin>x;
         vec.pb(x);
      }
      sort(vec.begin(), vec.end());
      int lo = 0, hi = t;
      while(vec[lo]+EPS < vec[hi])
      {
         int mid = vec[lo]+(vec[hi]-vec[lo])/2;

      }
   }
   #ifdef anikakash
      fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
   #endif
    return 0;
}

