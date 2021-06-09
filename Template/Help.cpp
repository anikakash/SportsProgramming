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
// #define gcd(a, b)            __gcd(a, b)
// #define lcm(a, b)            ((a)*((b)/gcd(a,b)))
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


void firstthree(ll n, ll m)
{
  dl x = m*log10(n);
  x = x - (ll)x;
  dl ans = pow(10,x);
  int res = ans*100;

  cout<<res<<"...";

}

ll sum(ll mid)
{
    return mid*(mid+1)/2;
}

ll binary_src(ll x)
{
    ll mid = x;
    while(1)
    {
          mid/=2;
        if(sum(mid) > x)mid--;
        else if(sum(mid) <x) mid++;
        else if(sum(mid) == x) return mid;
    }
}
 
vector<int>arr;
int main()
{
   #ifdef anikakash
        clock_t tStart = clock();
        freopen("input.txt","r",stdin);
        freopen("out.txt","w",stdout);
   #endif
   
        ll t;
        scanf("%lld",&t);
        while(t--)
        {
            ll n;
            scanf("%lld",&n);
            printf("%lld\n",binary_src(n));

        }

   #ifdef anikakash
      fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
   #endif
    return 0;
}
 
