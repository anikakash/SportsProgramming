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

//Funtions
template <class T> T digitsum(T n) {T sum = 0; while (n != 0) {sum += n % 10; n /= 10;} return sum;}
template <class T> T gcd(T a, T b) { T x ; return x = __gcd(a, b);}
template <class T> T lcm(T a, T b) {T y; return y = ((a) * (b)) / gcd(a, b);}

// Debugger
#define gobug                   0
#define debugNS(a,b,c)          cout<<a<<b<<c<<endl;
#define debugN(b)               cout<<b<<endl;

int ROW[] = { +0, +0, -1, +1};
int COL[] = { +1, -1, +0, +0};

int X[] = { +0, +0, +1, -1, -1, +1, -1, +1}; // Kings Move
int Y[] = { -1, +1, +0, +0, +1, +1, -1, -1}; // Kings Move

int KX[] = { -2, -2, -1, -1,  1,  1,  2,  2}; // Knights Move
int KY[] = { -1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move


ll factorial[21];

ll fact(ll n) {
    return !n ? factorial[n] = 1ll : factorial[n] = n * fact(n - 1);
}


int main() {

#ifdef anikakash
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("ans.txt", "w", stdout);
#endif

    FASTERIO;

    int tt; cin >> tt;
    for (int caseno = 1; caseno <= tt; caseno++) {
        ll k, c, n, a; cin >> k >> c >> n >> a;
        ll ans[n + 7];
        ans[0] = a;
        for (int i = 1; i < n; i++) {
            ans[i] = (k * ans[i - 1] + c) % 1000007;
        }

        ll sum = 0;
        // for(int i=0; i<n; i++)cout<<ans[i]<<" ";NL;
            sort(ans,ans+n);
        // for(int i=0; i<n; i++)cout<<ans[i]<<" ";NL;
            ll pre=0, to=0;
        for (int i = 1; i < n; i++) {
            pre += abs( ans[i] - ans[i-1] )*i;
            to+=pre;
        }
        
        cout <<"Case "<<caseno<<": "<< to << endl;
    }


#ifdef anikakash
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}