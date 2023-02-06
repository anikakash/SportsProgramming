#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                       cout<<'\n';
#define pi                       acos(-1.0) //3.1415926535897932384626
#define pb                       push_back
#define mk                       make_pair
#define MaxN                     100005 //1e5
#define EPS                      1e-18
#define dpoint(x)                fixed<<setprecision(x)
#define Fill(ar, weight)         memset(ar, weight, sizeof(ar))
typedef long long int            ll;
typedef double                   dl;
typedef unsigned long long int   ull;



void solve(){
  int n; cin>>n;
  int val = n*n, x=1;
  int y=val;
  vector<int>v;

  for(int i=1; i<=val; i++){
      if(i%2==1){
         v.pb(x); x++;
      }
      else{
         v.pb(y); y--;
      }
  }

  // for(auto it:v)cout<<it<<" ";NL;
  x=0;
   for(int i=1; i<=n; i++){
      if(i%2==1){
         for(int j=x; j<x+n; j++)cout<<v[j]<<" ";NL;
            x+=n;
      }
      else{
         for(int j=(n+x)-1; j>=x; j--)cout<<v[j]<<" ";NL;
            x+=n;
      }
   }
}

int main() {
#ifdef INSANE
   clock_t tStart = clock();
   freopen("int.txt", "r", stdin);
   freopen("out.txt", "w", stdout);
#endif
  
    FASTERIO; // comment when use scanf and printf 
   
   int tt, caseno=1; 
   cin>>tt;
   flush; 
   while(tt--){
      solve();
   }

#ifdef INSANE
   fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}
