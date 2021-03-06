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
int is_prime(ll n)
{
    ll i, root;
    if (n == 2) return 1;
    if (n % 2 == 0 || n == 1) return 0;

    root = sqrt(n);

    for (i = 3; i <= root; i = i + 2)if (n % i == 0)  return 0;

    return 1;
}


int main() {

#ifdef anikakash
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("ans.txt", "w", stdout);
#endif

    FASTERIO;

    int tt;cin>>tt;
    while(tt--){
        ll n1, n2;
        int p1, p2;
        cin>>n1>>p1;
        cin>>n2>>p2;

        ll fsz = log10(n1), ssz = log10(n2);
        fsz++; ssz++;
         fsz = fsz+p1, ssz = ssz+p2;

        if(fsz>ssz)cout<<">"<<endl;
        else if(fsz<ssz)cout<<"<"<<endl;
        else{

            string s1 = to_string(n1), s2 = to_string(n2);
            while(s1.size()!=s2.size()){
                if(s1.size()>s2.size())s2+='0';
                else s1+='0';
            }
            if(s1<s2)cout<<"<"<<endl;
            else if(s1>s2)cout<<">"<<endl;
            else cout<<"="<<endl;
            
        }

    }

#ifdef anikakash
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}