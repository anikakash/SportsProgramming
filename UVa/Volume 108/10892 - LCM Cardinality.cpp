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
int lcm(ll a, ll b) {
    return (a * b) / __gcd(a, b);
}

void solve() {
    ll n;
    while (cin >> n) {
        if (n == 0) return;
        int sqr = sqrt(n);
        std::vector<int> v;
        for (int i = 1; i <= sqr; i++) {
            if (n % i == 0) {
                v.pb(i); v.pb(n / i);
            }
        }
        if(sqr*sqr==n)v.pop_back();
        // for(auto it:v)cout<<it<<" ";
            // cout<<endl;
        int cnt = 0;
        for (int i = 0; i < v.size(); i++) {
            for (int j = i; j < v.size(); j++) {
                if (lcm(v[i], v[j]) == n){
                    cnt++;
                    // cout<<i<<" = "<<v[i]<<" "<<v[j]<<endl;
                }
            }
        }
        cout<<n<<" "<<cnt<<endl;
    }
}

int gate = 0;
int main() {

#ifdef wordsworth
    clock_t tStart = clock();
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    FASTERIO;

    if (gate) {
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