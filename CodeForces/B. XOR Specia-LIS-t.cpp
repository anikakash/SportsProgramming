#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                       cout<<'\n';
#define pi                       acos(-1.0) //3.1415926535897932384626
#define pb                       push_back
#define mk                       make_pair
#define MaxN                     3000
#define EPS                      1e-18
#define dpoint(x)                fixed<<setprecision(x)
// #define Fill(ar, weight)            memset(ar, weight, sizeof(ar))
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

vector<int>prime_factor;
void primeFactorization(int n)
{
    for (int i = 0; prime[i]*prime[i] <= n; i++)
    {
        if (n % prime[i] == 0)
        {
            while (n % prime[i] == 0)
            {
                n /= prime[i];
                prime_factor.pb(prime[i]);
            }
        }
    }
    if (n > 1)prime_factor.pb(n);
}

int main() {

#ifdef anikakash
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    FASTERIO;

    int tt; cin >> tt;
    while (tt--) {
        int n; cin >> n;

        vector<int>arr(n), frek;
        map<int, int>mp;
        bool flg = false;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            // mp[arr[i]]++;
            // if (mp[arr[i]] >= 2)flg = true;
        }
        if (n % 2 == 0)cout << "YES" << endl;
        else {
            
            for(int i=1; i<n; i++){
                if(arr[i-1]>=arr[i])flg=true;
            }
            if(flg)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }


#ifdef anikakash
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}