#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                       cout<<'\n';
// #define pi                       acos(-1.0) //3.1415926535897932384626
#define pb                       push_back
#define mk                       make_pair
// #define MaxN                     1000001
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

#define maxN 1000001
int ans[maxN];
bool isPrime[maxN];
vector<int> prime;

void Sieve() {
    memset(isPrime, true, maxN);
    isPrime[0] = isPrime[1] = false;
    for (int i=2, lm=(int)sqrt(maxN); i<=lm; i++)
        if (isPrime[i]) {
            for (int j=i*i; j<=maxN; j+=i)
                isPrime[j] = false;
            prime.push_back(i);
        }
    for (int i=prime.back()+1; i<=maxN; i++)
        if (isPrime[i]) prime.push_back(i);
}

void PreCal() {
    Sieve();
    ans[1] = 0;
    for (int i=2; i<maxN; i++) {
        ans[i] = ans[i-1];
        int n=i, j=0;
        while (!isPrime[n]) {
            if (n%prime[j]==0) {
                ans[i]++;
                n /= prime[j];
            }
            else j++;
        }
        if (isPrime[n]) ans[i]++;
    }
}

int main() {

#ifdef anikakash
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("ans.txt", "w", stdout);
#endif

    FASTERIO;
    PreCal();
    int n;
    while(cin>>n){
        cout<<ans[n]<<endl;
    }

#ifdef anikakash
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}

