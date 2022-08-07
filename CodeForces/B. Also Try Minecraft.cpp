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

void printSubstrings(string str)
{
 
    // First loop for starting index
    string ans ="";
    for (int i = 0; i < str.length(); i++) {
        string subStr="";
        // Second loop is generating sub-string
        for (int j = i; j < str.length(); j++) {
            subStr += str[j];
           string ss = subStr;
           reverse(ss.begin(), ss.end());
           if(ss==subStr){
                if(subStr.size()>ans.size())ans = subStr;
           }
        }
    }
    cout<<ans<<endl;
}

void solve(){
    ll n, m; cin>>n>>m;
    vector<ll>v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    ll sum1[n+5]={0};

    for(int i=2; i<=n; i++){
        if(v[i-2]>v[i-1]){
            sum1[i]=sum1[i-1]+(v[i-2]-v[i-1]);
        }
        else sum1[i]=sum1[i-1];
    }
    // for(int i=1; i<=n; i++)cout<<sum1[i]<<" ";NL;
    reverse(v.begin(), v.end());
    
    vector<ll>sum2;
    sum2.pb(0);
    sum2.pb(0);
    for(int i=2; i<=n; i++){
        if(v[i-2]>v[i-1]){
            sum2.pb(sum2[i-1]+(v[i-2]-v[i-1]));
        }
        else sum2.pb(sum2[i-1]);
    }
    reverse(sum2.begin(), sum2.end());
    // for(int i=0; i<sum2.size(); i++)cout<<sum2[i]<<" ";NL;
    while(m--){
        ll x, y; cin>>x>>y;
        if(x<y){
            // cout<<sum1[x]<<" "<<sum1[y]<<endl;
            cout<<(ll)abs(sum1[y]-sum1[x])<<endl;
        }
        else{
            cout<<(ll)abs(sum2[y-1]-sum2[x-1])<<endl;
        }
    }
}

int main() {
#ifdef INSANE
   clock_t tStart = clock();
   freopen("int.txt", "r", stdin);
   freopen("anik.txt", "w", stdout);
#endif
  
    FASTERIO; // comment when use scanf and printf 

   int tt; 
   // cin>>tt; 
   tt=1;
   while(tt--)
    solve();

#ifdef INSANE
   fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}