#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                       cout<<'\n';
// #define pi                       acos(-1.0) //3.1415926535897932384626
#define pb                       push_back
#define mk                       make_pair
#define MaxN                     33000
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

vector<vector<int>> Determinate_Prime;

void calculate() {
    for (int i = 0; i + 2 < prime.size(); i++) {
        vector<int>arr;
        int diff = prime[i + 1] - prime[i];
        arr.pb(prime[i]);
        arr.pb(prime[i + 1]);
        int x = i + 1, cnt = 0;
        while (diff == prime[x + 1] - prime[x]) {
            arr.pb(prime[x + 1]);
            x++;
            cnt++;
        }
        if (cnt == 0) {
            arr.pop_back();
            arr.pop_back();
        } else i = x - 1;
        if(arr.size()!=0)Determinate_Prime.pb(arr);
    }
}

int main() {

#ifdef anikakash
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    FASTERIO;
    sieve(); calculate();

    int a, b;
    while (cin >> a >> b) {
        if (a == 0 && b == 0)return 0;
        if (a > b)swap(a, b);
        bool flg = false;
        // cout<<"a = "<<a<<" b = "<<b<<endl;
        for (int i = 0; i < Determinate_Prime.size(); i++) {
            if (Determinate_Prime[i].size() > 2 && Determinate_Prime[i][0] >= a && Determinate_Prime[i].back() <= b ) {
                for (int j = 0; j < Determinate_Prime[i].size(); j++) {
                    // if (Determinate_Prime[i][j] >= a && Determinate_Prime[i][j] <= b) {
                        cout << Determinate_Prime[i][j];
                        if (j != Determinate_Prime[i].size() - 1)cout << " ";
                        flg = true;
                    // }
                    // else break;
                }
                if (flg) {
                    cout << endl;
                    flg = false;
                }
            }
        }
    }

#ifdef anikakash
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}

