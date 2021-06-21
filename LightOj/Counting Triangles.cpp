#include<bits/stdc++.h>
using namespace    std;

#define flush                   cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                      cout<<endl;
#define pi                      acos(-1.0) //3.1415926535897932384626
#define pb                      push_back
#define mx                      10000007
#define EPS                     1e-10
#define dpoint(x)               fixed<<setprecision(x)
#define debug1(a)               cout<<" "<<a<<" = ";
#define debug2(b)               cout<<b<<endl;
typedef long long int           ll;
typedef double                  dl;
typedef unsigned long long      ul;
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}
int gcd(int a, int b){ int x ; return x = __gcd(a, b);}
int lcm(int a, int b){int y; return y = ((a)*((b)/gcd(a,b)));}


int main(){
   #ifdef anikakash
        clock_t tStart = clock();
        freopen("in.txt","r",stdin);
        freopen("output.txt","w",stdout);
   #endif

        int t;
        scanf("%d",&t);
        for(int caseno=1; caseno<=t; caseno++){
            
            vector<ll>arr; arr.clear();
            ll n; scanf("%lld",&n);

           for(int i=0; i<n; i++){
               ll x; scanf("%lld",&x);
               arr.pb(x);
            }

            sort(arr.begin(), arr.end());

            int ans = 0, total=0;
            for(ll i=0; i<n; i++){
               for(ll j=i+1; j<n; j++){

                  ll a = arr[i], b = arr[j],sum = 0;
                  sum = arr[i]+arr[j];
                  ll up = (upper_bound(arr.begin(), arr.end(),sum-1)-arr.begin())-1;//for 0 base;

                  if(up>j)
                  {
                     up-=j;
                     ans+=up;
                  }
               }
            }
            printf("Case %d: %lld\n",caseno,ans);
        }

   #ifdef anikakash
      fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
   #endif
   return 0;
}