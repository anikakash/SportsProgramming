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

void solve() {
    int n; cin>>n;
        vector<ll>v(n);
        for(int i=0; i<n; i++)cin>>v[i];

            ll v1=0, v2=0;
        for(int i=0; i<n; i+=2)v1 = __gcd(v1,v[i]);
        for(int i=1; i<n; i+=2)v2 = __gcd(v2,v[i]);

        bool flg = true;
        for(int i=0; i<n; i+=2){
            if(v[i]%v2==0){
               flg = false; break;
            }
        }
        if(flg){
            cout<<v2<<endl; return;
        }

        flg = true;
        for(int i=1; i<n; i+=2){
            if(v[i]%v1==0){
                flg = false; break;
            }
        }
        if(flg){
            cout<<v1<<endl; return;
        }
        cout<<0<<endl;
}

int main() {

#ifdef anikakash
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("ans.txt", "w", stdout);
#endif

    FASTERIO;

    int tt; cin >> tt;
    while (tt--) {
        solve();
    }
#ifdef anikakash
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}