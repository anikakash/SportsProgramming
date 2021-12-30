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

ll sq(ll n, ll p) {
    ll xx = 1;
    for (ll i = 1; i <= p; i++)xx *= n;
    return xx;
}


int main() {

#ifdef anikakash
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("tt.txt", "w", stdout);
#endif

    FASTERIO;

    int tt; cin>>tt;
    while(tt--){
        int n,m, rb,rd, cb, cd,cnt=0;
        cin>>n>>m>>rb>>rd>>cb>>cd;
        if(rb==cb || rd==cd)cout<<0<<endl;
        else{
        bool rb_active=false, rd_active=false;
        while(1){
            if(rb<n && !rb_active)rb++;
            else if(rb==n || rb_active==true){rb--;rb_active=true;}

            if(rd<m && !rd_active)rd++;
            else if(rd==m || rd_active==true){rd--;rd_active=true;}
            cnt++;
            // cout<<"rb = "<<rb<<"     rd = "<<rd<<endl;
            if(rb == cb || rd == cd){
                cout<<cnt<<endl; break;
            }
        }
    }

    }


#ifdef anikakash
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}