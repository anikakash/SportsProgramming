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

int main() {
#ifdef INSANE
    clock_t tStart = clock();
    freopen("int.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    FASTERIO;
    
    int tt; cin>>tt;
    while(tt--){
        ll a, b; cin>>a>>b;
        int ans=INT_MAX, cnt;
        for(int i=0; i<30; i++){
            if(b+i==1)continue;
            else{
                int B=b+i;
                int A=a;
                cnt=i;
                while(A){
                    A/=B; cnt++;
                }
                if(cnt<ans)ans=cnt;
            }
        }
        cout<<ans<<endl;
    }
    
#ifdef INSANE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}