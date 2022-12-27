#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                       cout<<'\n';
#define pi                       acos(-1.0) //3.1415926535897932384626
#define pb                       push_back
#define mk                       make_pair
#define MaxN                     100005 //1e5
#define EPS                      1e-18
#define dpoint(x)                fixed<<setprecision(x)
#define Fill(ar, weight)         memset(ar, weight, sizeof(ar))
typedef long long int            ll;
typedef double                   dl;
typedef unsigned long long int   ull;


vector<int>pairs[1001];
void solve(){
    // for(int j:pairs[2])
        // cout<<j<<endl;

    int n; cin>>n;
    vector<int>val[1001];
    map<int,int>mp;
    for(int i=1; i<=n; i++){
        int x; cin>>x;
        val[x].pb(i);
        mp[x]=i;
    }
    
    int ans =-1;

    for(auto it:mp){
        for(auto rit:mp){
            if(__gcd(it.first, rit.first)==1)
                ans = max(ans,it.second+rit.second);
        }
    }
    cout<<ans<<endl;
}

int main() {
#ifdef INSANE
   clock_t tStart = clock();
   freopen("int.txt", "r", stdin);
   freopen("out.txt", "w", stdout);
#endif
  
    FASTERIO; // comment when use scanf and printf 

   for(int i=1; i<=1000; i++)
        for(int j=1; j<=1000; j++)
            if(__gcd(i,j)==1)pairs[i].pb(j);
    
   
   int tt; 
   cin>>tt; 
   while(tt--)
    solve();

#ifdef INSANE
   fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}