//              _   _                
//   __ _ _   _| |_| |__   ___  _ __ 
//  / _` | | | | __| '_ \ / _ \| '__|
// | (_| | |_| | |_| | | | (_) | |   
//  \__,_|\__,_|\__|_| |_|\___/|_|   
//              _ _            _             _     
//   __ _ _ __ (_) | __   __ _| | ____ _ ___| |__  
//  / _` | '_ \| | |/ /  / _` | |/ / _` / __| '_ \ 
// | (_| | | | | |   <  | (_| |   < (_| \__ \ | | |
//  \__,_|_| |_|_|_|\_\  \__,_|_|\_\__,_|___/_| |_|

#include<bits/stdc++.h>
using namespace    std;

#define flush                   cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define fasterio                ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                      cout<<endl;
#define pi                      acos(-1.0) //3.1415926535897932384626
#define dpoint(x)               fixed<<setprecision(x)
#define debug(x)                cout<<x<<endl;
#define pb                      push_back
#define mx                      10000007
#define EPS                     1e-9
typedef long long int           ll;
typedef double                  dl;
typedef unsigned long long      ul;

// --------------------------Pre made Functions & Proto Type--------------------------//
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}
int gcd(int a, int b){ int x ; return x = __gcd(a, b);}
int lcm(int a, int b){int y; return y = ((a)*((b)/gcd(a,b)));}


vector<ll>arr; //declear the vector globally for easy access;
ll upperBound(ll key)
{
   ll l=0, r = arr.size()-1, ans=arr.size();
   while(l<=r)
   {
      ll mid = l+(r-l)/2;
      if(arr[mid]>key)
      {
         ans = mid;
         r = mid-1;
      }
      else l = mid+1;
   }
   return ans;
}

ll lowerBound(ll key)
{
   ll l=0, r = arr.size()-1, ans=arr.size();
   while(l<=r)
   {
      ll mid = l+(r-l)/2;
      if(arr[mid]>=key)
      {
         ans = mid;
         r = mid-1;
      }
      else l = mid+1;
   }
   return ans;
}


int main()
{
   #ifdef anikakash
        clock_t tStart = clock();
        freopen("input.txt","r",stdin);
        freopen("ot.txt","w",stdout);
   #endif
        
         int t;
         scanf("%d",&t);
         for(int c=1; c<=t; c++)
         {
            ll n,q;
            scanf("%lld %lld",&n,&q);
            for(ll i=0; i<n; i++)
            {
               ll x;
               scanf("%lld",&x);
               arr.pb(x);
            }
            printf("Case %d:\n",c);
            while(q--)
            {
               ll a,b, cnt=0;
               scanf("%lld %lld",&a,&b);
               ll lb = lowerBound(a);
               ll ub = upperBound(b);
               printf("%lld\n",ub-lb);
               //cout<<lb <<" "<<ub<<endl;
            }
            arr.clear();
         }
         

      
   #ifdef anikakash
      fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
   #endif
    return 0;
}


//  _____            _   _            _                      ___   __ 
// |  ___|__  _ __  | |_| |__   ___  | |    _____   _____   / _ \ / _|
// | |_ / _ \| '__| | __| '_ \ / _ \ | |   / _ \ \ / / _ \ | | | | |_ 
// |  _| (_) | |    | |_| | | |  __/ | |__| (_) \ V /  __/ | |_| |  _|
// |_|  \___/|_|     \__|_| |_|\___| |_____\___/ \_/ \___|  \___/|_|                                                                    
//   ____ ____  
//  / ___|  _ \ 
// | |   | |_) |
// | |___|  __/ 
//  \____|_|    
//            