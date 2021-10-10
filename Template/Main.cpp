#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                       cout<<'\n';
#define pi                       acos(-1.0) //3.1415926535897932384626
#define pb                       push_back
#define mk                       make_pair
#define mx                       46500
#define EPS                      1e-18
#define dpoint(x)                fixed<<setprecision(x)
#define Fill(ar, val)            memset(ar, val, sizeof(ar))
typedef long long int            ll;
typedef double                   dl;
typedef unsigned long long int   ull;

//Funtions
template <class T> T digitsum(T n) {T sum = 0; while (n != 0) {sum += n % 10; n /= 10;} return sum;}
int gcd(int a, int b) { int x ; return x = __gcd(a, b);}
int lcm(int a, int b) {int y; return y = ((a) * ((b) / gcd(a, b)));}

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

string DecimalToBinary(int n) {

    string res = "";
    for (int i = 31; i >= 0; i--) {
        int k = n & (1 << i);
        res += (n & k) ? '1' : '0';
    }
    return res;
}
int BinaryToDecimal(string s) {
    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
        ans = (2 * ans) + s[i] - '0';
    }
    return ans;
}
bool cmp(pair<int, int>a, pair<int, int>b) {
    if (a < b)return true;
    return false;
}

ll findTrailingZeros(ll n)
{
    ll count = 0;
    for (ll i = 5; n / i >= 1; i *= 5)
        count += n / i;
    return count;
}

int par[mx];
int sz[mx];
int max_size = INT_MIN;

int root(int u) {
    if (par[u] != u) return par[u] = root(par[u]);
    else return u;
}

void marge(int p, int q) {
    if (sz[p] >= sz[q]) {
        sz[p] += sz[q];
        par[q] = p;
        max_size = max(max_size, sz[p]);
    }
    else {
        sz[q] += sz[p];
        par[p] = q;
        max_size = max(max_size, sz[q]);
    }
}

ll L,R, Prime_size;

vector<ll>prime;
bool vis[mx];  //mx is define in above of the code;
void sieve() {

    Fill(vis, true);
    vis[0] = vis[1] = false;
    for(int i=4; i<mx; i+=2)vis[i]=false;

    ll x=sqrt((int)mx);
    for(ll i=3; i<=x; i+=2) {
        if(vis[i]) {
            for(ll j=i*i; j<mx; j+=2*i)
                vis[j]=false;
        }
    }
    prime.pb(2);
    for(ll i=3; i<mx; i+=2)
        if(vis[i]==0)
            prime.pb(i);
        Prime_size = prime.size();
}

bool isprime(ll n){
    if(n<mx) return vis[n];
    int root = sqrt(n);
    for(int i=0; i<Prime_size && prime[i]<=root; i++)
        if(n%prime[i]==0)return false;
    return true;
}

int nextPrime(ll u){
    for(++u; u<=R; u++)
        if(isprime(u)) return u;
    return -1;
}

int main() {

#ifdef anikakash
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

     sieve();
    while (scanf("%ld %ld", &L, &R)!=EOF) {
        int Max = 0, Min = INT_MIN, ax, ay, bx, by;
        int last = nextPrime(L-1), next;
        if (last!=-1) while (1) {
            next = nextPrime(last);
            if (next==-1) break;
            if (next-last > Max) {
                Max = next - last;
                ax = last; ay = next;
            }
            if (next-last < Min) {
                Min = next - last;
                bx = last; by = next;
            }
            last = next;
        }
        if (Max==0) puts("There are no adjacent primes.");
        else printf("%d,%d are closest, %d,%d are most distant.\n", bx, by, ax, ay);
    }


#ifdef anikakash
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}