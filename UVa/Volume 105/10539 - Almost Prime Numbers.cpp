#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                       cout<<'\n';
// #define pi                       acos(-1.0) //3.1415926535897932384626
#define pb                       push_back
#define mk                       make_pair
#define MaxN                     1000001
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
int prime[1000001];
int n=1000001;
vector<int>v;
void sieve()
{
    memset(prime,0,sizeof(prime));
    prime[0]=prime[1]=1;
    for(int i=2;i*i<=n;i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                prime[j]=1;
            }
        }
    }
}

vector<ll>ans;
void solve()
{
    for(ll i=0;i<=n;i++)
    {
        if(!prime[i])
        {
            for(ll j=i*i;j<1000000000001;j*=i)ans.push_back(j);
        }
    }
    sort(ans.begin(),ans.end());
}



int main() {

#ifdef anikakash
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    FASTERIO;
    sieve();
    solve();

    int tt;cin>>tt;
    while(tt--){
        ll l,h; cin>>l>>h;
        ll i=0, j=0;
        while(ans[i]<l){
            i++;
        } 
        j =i;
        while(ans[j]<=h){
            j++;
        }
        cout<<(int)j-i<<endl;
    }
    // for(int i=0; i<=10; i++)cout<<ans[i]<<endl;

#ifdef anikakash
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}

