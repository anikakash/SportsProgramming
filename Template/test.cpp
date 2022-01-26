#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                       cout<<'\n';
#define pi                       acos(-1.0) //3.1415926535897932384626
#define pb                       push_back
#define mk                       make_pair
#define MaxN                     1000000
#define EPS                      1e-18
#define dpoint(x)                fixed<<setprecision(x)
#define Fill(ar, weight)         memset(ar, weight, sizeof(ar))
typedef long long int            ll;
typedef double                   dl;
typedef unsigned long long int   ull;
 int lcm(ll a, ll b){
    return (a*b)/__gcd(a,b);
 }

void solve() {
      int n, mx=-1000000000;
      long long k;
      cin>>n>>k;
      vector<int>v(n);
      for(int i=0; i<n; i++){
        cin>>v[i]; if(mx<v[i])mx=v[i];
      }
      int mx2=0;
      for(int i=0; i<n; i++){
        v[i]=mx-v[i]; if(mx2<v[i])mx2=v[i];
      }
       k--; k%=2;
      for(int i=0; i<n && k; i++)v[i]=mx2-v[i];
      for(auto it:v)cout<<it<<" "; cout<<"\n";
}

int gate=1;
int main() {

#ifdef wordsworth
    clock_t tStart = clock();
    freopen("int.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    FASTERIO;

    if(gate){
        int tt; cin >> tt;
        while (tt--) {
            solve(); 
        }
    }
    else solve();

#ifdef wordsworth
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}