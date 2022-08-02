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
    ll n, h, m; 
    cin>>n>>h>>m;
    h = (h*60)+m;
    vector<ll>v;
    for(int i=0; i<n; i++){
        ll x, y; cin>>x>>y;
        x = (x*60)+y;
        v.pb(x);
    }
    // sort(v.begin(), v.end());
    // cout<<h<<endl;
    // for(int i=0; i<n; i++)cout<<v[i]<<" ";NL;

    for(int i=0; i<n; i++){
        if(v[i]==h){
            cout<<"0 0"<<endl;
            return;
        }
    }
    ll ans = 1e18;
    for(int i=0; i<n; i++){
        if(h>v[i]) ans=min(ans,((24*60)-h)+v[i]);
        else ans=min(ans,v[i]-=h);
    }
    cout<<ans/60<<" "<<ans%60<<endl;
}

int main() {
#ifdef INSANE
   clock_t tStart = clock();
   freopen("int.txt", "r", stdin);
   freopen("anik.txt", "w", stdout);
#endif
  
    FASTERIO; // comment when use scanf and printf 

   int tt;
   cin>>tt; 
   while(tt--)solve();

#ifdef INSANE
   fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}