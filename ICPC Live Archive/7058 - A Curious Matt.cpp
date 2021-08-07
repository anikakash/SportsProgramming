#include<bits/stdc++.h>
using namespace    std;

#define flush                   cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                      cout<<'\n';
#define pi                      acos(-1.0) //3.1415926535897932384626
#define pb                      push_back
#define mx                      10000007
#define AC                      int
#define EPS                     1e-10
#define dpoint(x)               fixed<<setprecision(x)
typedef long long int           ll;
typedef double                  dl;
typedef unsigned long long      ul;
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}
int gcd(int a, int b){ int x ; return x = __gcd(a, b);}
int lcm(int a, int b){int y; return y = ((a)*((b)/gcd(a,b)));}

// Debugger
#define debugNS(a,b)             cout<<a<<" = "<<b<<endl;
#define debugN(b)               cout<<b<<endl;


int main(){
   
  #ifdef anikakash
       clock_t tStart = clock();
       freopen("INPUT.txt","r",stdin);
       freopen("OUTPUT.txt","w",stdout); 
  #endif

   FASTERIO;
 

   int t;cin>>t;
   for(int caseno=1; caseno<=t; caseno++){
        int n; cin>>n;
        vector<pair<ll,ll>>vp;

        for(int i=0; i<n; i++){
            int x,y; cin>>x>>y;
            vp.pb(make_pair(x,y));
        }

        sort(vp.begin(), vp.end());

        dl ans = 0.0;
        
        for(int i=0; i<n; i++){
            ll time = vp[i+1].first - vp[i].first;
            ll distance = abs(vp[i+1].second - vp[i].second);
            ans = max(ans, (dl)distance/time);
        }
        cout<<"Case #"<<caseno<<": "<<dpoint(2)<<ans<<endl;

   }

  #ifdef anikakash
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
  #endif
   return 0;
}