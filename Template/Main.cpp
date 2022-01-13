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


void solve() {
    ll n; cin>>n;
    vector<pair<ll,pair<ll,ll>>>vp;
    vector<ll>v(n), f(n), b(n);

    for(int i=0; i<n; i++)cin>>v[i];
    for(int i=0; i<n; i++)cin>>f[i];
    for(int i=0; i<n; i++)cin>>b[i];

    for(int i=0; i<n; i++)
        vp.pb(make_pair(v[i],make_pair(f[i],b[i])));
    sort(vp.begin(), vp.end());

    // for(int i=0; i<n; i++)
    //     cout<<vp[i].first<<" "<<vp[i].second.first<<" "<<vp[i].second.second<<endl;
    
    ll ln; cin>>ln;
    vector<ll>list(ln);
    for(int i=0; i<ln; i++)cin>>list[i];
        vector<ll>ans;
    for(int i=0; i<ln; i++){
        for(int j=0; j<n; j++){
            if((vp[j].first!=-1) && ((list[i]==vp[j].second.first)||(list[i]==vp[j].second.second))){
                ans.pb(vp[j].first);
                vp[j].first=-1; list[i]=-1; break;
            }
        }
        if(list[i]!=-1)ans.pb(-1);
    }
    for(auto it:ans)cout<<it<<" ";
        ll ss = ans.size();
    ln-=ss;
    while(ln--)cout<<-1<<" ";
    cout<<"\n";
}

int gate=0;
int main() {

#ifdef wordsworth
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
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