#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                       cout<<'\n';
// #define pi                       acos(-1.0) //3.1415926535897932384626
#define pb                       push_back
#define mk                       make_pair
#define MaxN                     1000000
#define EPS                      1e-18
#define dpoint(x)                fixed<<setprecision(x)
#define Fill(ar, weight)         memset(ar, weight, sizeof(ar))
typedef long long int            ll;
typedef double                   dl;
typedef unsigned long long int   ull;


void solve() {
    int n; cin>>n;
    vector<int>e,o;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        if(x&1)o.pb(x);
        else e.pb(x);
    }
    vector<int>v;
    v=e;
    int ans=0;
    for(int i=0; i<o.size(); i++)v.pb(o[i]);
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            ans+=__gcd(v[i],2*v[j])>1;
        }
    }
    cout<<ans<<endl;
}

int gate=1;
int main() {

#ifdef wordsworth
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
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