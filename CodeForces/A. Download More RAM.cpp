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
    int n, k; cin>>n>>k;
    vector<int>a(n), b(n);
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<n; i++)cin>>b[i];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[j]<=k && a[j]!=-1){
                k+=b[j]; a[j]=-1;
            }
        }
    }
    cout<<k<<endl;
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