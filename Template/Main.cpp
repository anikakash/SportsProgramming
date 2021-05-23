//             _   _                
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

#define flush             cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define fasterio          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                cout<<endl;
#define pi                acos(-1.0) //3.1415926535897932384626
#define dpoint(x)         fixed<<setprecision(x)
#define debug(x)          cout<<x<<endl;
// #define gcd(a, b)         __gcd(a, b)
// #define lcm(a, b)        ((a)*((b)/gcd(a,b)))
#define pb                push_back
#define mx                1000006

typedef long long int       ll;
typedef double              dl;
typedef unsigned long long  ul;

// --------------------------Pre made Functions & Proto Type--------------------------//
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}
int gcd(int a, int b){ int x ; return x = __gcd(a, b);}
int lcm(int a, int b){int y; return y = ((a)*((b)/gcd(a,b)));}

vector<int>prime;
bool vis[mx];
void sieve()
{
      for(ll i=3; i*i<=mx; i+=2)
      {
          if(vis[i]==0)
          {
              for(ll j = i*i; j<mx; j+=2*i)
              vis[j]=1;
          }
      }

      prime.pb(2);
      for(ll i=3; i<mx; i+=2)
        if(vis[i]==0)prime.pb(i);
}

ll big_mod(ll base, ll power, ll mod)
{
    if(power==0)    return 1;
    
    else if(power%2==1) 
    {
        ll p1 = base % mod;
        ll p2 = (big_mod(base,power-1,mod))%mod;
        return (p1*p2)%mod;
    }
    else if(power%2==0)
    {
        ll p1 = (big_mod(base,power/2,mod))%mod;
        return (p1*p1)%mod;
    }
}


int main()
{
    #ifdef EXTRA_8
        clock_t tStart = clock();
        freopen("input.txt","r",stdin);
        freopen("ans.txt","w",stdout);
    #endif
        sieve();
        
      ll n;
      while(cin>>n)
      {
         if(n==0)return 0;
        // if(n==1)cout<<1<<endl;
        ll res = 1;
        ll two=0, five=0;

         for(ll i=0; prime[i]<=n; i++)
         {
           ll  pow = 0;
            ll x = prime[i];
            while(1)
            {
              if(x<=n) pow++;
              else break;
              x*=prime[i];
            }
            if(prime[i]==2) two = pow;
            else if(prime[i]==5) five = pow;
            else res*= big_mod(prime[i],pow, 10);
            
         }
         res = res%10;
         two = two-five;
         two = big_mod(2,two,10);
         res = (res*two)%10;
         cout<<res<<endl;
        // five = big_mod(5,five,10);
      }
       
    #ifdef EXTRA_8
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
