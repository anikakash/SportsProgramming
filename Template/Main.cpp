#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                       cout<<'\n';
#define pi                       acos(-1.0) //3.1415926535897932384626
#define pb                       push_back
#define mk                       make_pair
#define MaxN                     65536 // 2^16
#define EPS                      1e-18
#define dpoint(x)                fixed<<setprecision(x)
#define Fill(ar, weight)         memset(ar, weight, sizeof(ar))
typedef long long int            ll;
typedef double                   dl;
typedef unsigned long long int   ull;
int lcm(ll a, ll b){return (a*b)/__gcd(a,b);}

vector<int>prime;
bool vis[MaxN];

void sieve(){
    for(int i=3; i*i<=MaxN; i+=2){
        if(!vis[i]){
            for(int j=i*i; j<MaxN; j+=2*i)vis[j]=1;
        }
    }
    prime.pb(2);
    for(int i=3; i<MaxN; i+=2)if(!vis[i])prime.pb(i);
}
vector<int>factor;
void primeFactorization(int n){
    for(int i=0; prime[i]*prime[i]<=n; i++){
        if(n%prime[i]==0){
            while(n%prime[i]==0){
                n/=prime[i];
                factor.pb(prime[i]);
            }
        }
    }
    if(n>1)factor.pb(n);
}

void solve() {
    int n, cnt=1;
    while(cin>>n){
        if(n==0)return;
        cout<<"Case "<<cnt++<<": ";
        primeFactorization(n);
        int sum=0; 
        for(auto it:factor)sum+=it;
            if(factor.size()==1)sum++;
        cout<<sum<<endl;
        factor.clear();
    }
}

int gate=0;
int main() {

#ifdef wordsworth
    clock_t tStart = clock();
    freopen("int.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    FASTERIO;
    sieve();
    if(gate){
        int tt, i=1; cin >> tt;
        while (tt--) {
            solve(); 
        }
    }
    else solve();

#ifdef wordsworth
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}