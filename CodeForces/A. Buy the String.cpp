#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                       cout<<'\n';
#define pi                       acos(-1.0) //3.1415926535897932384626
#define pb                       push_back
#define mk                       make_pair
#define MaxN                     1000000
#define EPS                      1e-18
#define dpoint(x)                fixed<<setprecision(x)
#define Fill(ar, weight)         memset(ar, weight, sizeof(ar))
typedef long long int            ll;
typedef double                   dl;
typedef unsigned long long int   ull;
 int lcm(ll a, ll b){
    return (a*b)/__gcd(a,b);
 }

void solve() {
  int n, c0, c1, h; 
  cin>>n>>c0>>c1>>h;
  string s; cin>>s;
  int one=0;
  for(int i=0; i<s.size(); i++)if(s[i]=='1')one++;
  int zero = n-one;
    
    if(c0==c1 && c1==h)cout<<n<<"\n";
    else{
        int ff = (one*c1)+(zero*c0);
        int one_change_rate = (one*h)+(c0*n);
        int zero_change_rate = (zero*h)+(c1*n);
        int ans = min(ff,min(one_change_rate,zero_change_rate));
        cout<<ans<<"\n";
    }

}

int gate=1;
int main() {

#ifdef wordsworth
    clock_t tStart = clock();
    freopen("int.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    FASTERIO;

    if(gate){
        int tt; cin >> tt;
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