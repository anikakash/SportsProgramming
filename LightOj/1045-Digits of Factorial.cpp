#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                       cout<<'\n';
#define pi                       acos(-1.0) //3.1415926535897932384626
#define pb                       push_back
#define mk                       make_pair
#define MaxN                     10000008 //1e5
#define EPS                      1e-18
#define dpoint(x)                fixed<<setprecision(x)
#define Fill(ar, weight)         memset(ar, weight, sizeof(ar))
typedef long long int            ll;
typedef double                   dl;
typedef unsigned long long int   ull;



int main() {
#ifdef INSANE
   clock_t tStart = clock();
   freopen("int.txt", "r", stdin);
   freopen("ans.txt", "w", stdout);
#endif
  
    FASTERIO; // comment when use scanf and printf 

    dl storage [1000007];
    storage[0]=0;
    for(int i=1; i<=1000000; i++) storage[i]=storage[i-1]+log10(i);

    int tt,caseno=1; cin>>tt;
    while(caseno<=tt){
      cout<<"Case "<<caseno<<": ";
      caseno++;
     int n, base; cin>>n>>base;
      int digits = storage[n]/log10(base)+1;
      cout<<digits<<"\n";
    }

#ifdef INSANE
   fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}