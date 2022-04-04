#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                       cout<<'\n';
#define pi                       acos(-1.0) //3.1415926535897932384626
#define pb                       push_back
#define mk                       make_pair
#define MaxN                     10005
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

void fac_decomposition(int x, int v[]){
    for(int i=2; i<=x; i++){
        int k=0, t=i;
        while(t>1){
            if(t%prime[k]==0){
                t/=prime[k];
                v[prime[k]]++;
            }
            else
                k++;
        }
    }
}
void decomposition(int x,int v[])
{
    int k=0;
    while(x>1)
    {
        if(x%prime[k]==0)
        {
            x/=prime[k];
            v[prime[k]]++;
        }
        else
            k++;
    }
}

int mfac[10001], nfac[10001];
void solve() {
    // get_prime();
    int n, m;cin>>m>>n;
    memset(mfac,0,sizeof(mfac));
    memset(nfac,0,sizeof(nfac));
    fac_decomposition(n,nfac);
    decomposition(m, mfac);
    // for(int i=0; i<20; i++)cout<<nfac[i]<<" ";cout<<endl;
    // for(int i=0; i<20; i++)cout<<mfac[i]<<" ";cout<<endl;

        int flag=0;
        int ans=INT_MAX;
        for(int i=2;i<=5000;i++){
            if(mfac[i]>nfac[i]){
                flag=1;
                break;
            }
            if(mfac[i]!=0){
                ans=min(ans,nfac[i]/mfac[i]);
            }
        }
    if(flag)cout<<"Impossible to divide"<<"\n";
    else cout<<ans<<endl;
}

int gate=1;
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
            cout<<"Case "<<i++<<":"<<"\n";
            solve(); 
        }
    }
    else solve();

#ifdef wordsworth
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}
