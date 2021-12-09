#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                       cout<<'\n';
// #define pi                       acos(-1.0) //3.1415926535897932384626
#define pb                       push_back
#define mk                       make_pair
#define MaxN                     105
#define EPS                      1e-18
#define dpoint(x)                fixed<<setprecision(x)
#define Fill(ar, weight)            memset(ar, weight, sizeof(ar))
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

ll fact[21];
ll fun(int n) {
    return !n ? fact[n] = 1ll : fact[n] = n * fun(n - 1);
}

vector<ll>prime;
bool vis[MaxN];  //MaxN is define in above of the code;
void sieve() {
    ll x = sqrt((int)MaxN);
    for (ll i = 3; i <= x; i += 2) {
        if (vis[i] == 0) {
            for (ll j = i * i; j < MaxN; j += 2 * i)
                vis[j] = 1;
        }
    }
    prime.pb(2);
    for (ll i = 3; i < MaxN; i += 2)
        if (vis[i] == 0)
            prime.pb(i);
}

vector<ll>Nprime(30);
ll n, d;
int cal(int n, int k) {
    int res = 0, kk = k;
    while (kk <= n) {
        res += n / kk;
        kk *= k;
    }
    return res;
}

ll solve() {

    if(n==0)return (d==1)?1:0;

    int p = 0;
    while (prime[p] <= n) {
        // cout << prime[p] << endl;
        Nprime[p] = cal(n, prime[p]);
        p++;
    }

    int p2 = 0;

    while (p2 < prime.size()&& d != 1) {
        if (d % prime[p2] == 0) {
            while (d % prime[p2] == 0) {
                d /= prime[p2];
                Nprime[p2]--;
                if (Nprime[p2] < 0)return 0;
            }
        }
        p2++;
    }
    if (d != 1)return 0;

    ll ans = 1;
    for (int i = 0; i < 30; i++) if (Nprime[i])ans *= (Nprime[i] + 1);

    return ans;
}

int main() {

#ifdef anikakash
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("ans.txt", "w", stdout);
#endif

    FASTERIO;
    sieve();
    while (cin >> n >> d) {
        if(d<0)d*=-1;
        if(n==0 && d==0)return 0;
        for (int i = 0; i < 30; i++)Nprime[i]=0;
            cout<<(ll)solve()<<endl;
    }

#ifdef anikakash
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}