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
        for(int i=3; i*i<=mx; i+=2)
        {
            if(vis[i]==0)
            {
                for(int j = i*i; j<mx; j+=2*i)
                  vis[j]=1;
            }
        }

        prime.pb(2);
        for(int i=3; i<mx; i+=2)
          if(vis[i]==0)prime.pb(i);
    }


vector<int>prime_factor;
void primeFactorization(int n)
{
      for(int i=2; i*i<=n; i++)
      {
          if(n%i==0)
          {
              while(n%i==0)
              {
                  n/=i;
                  prime_factor.pb(i); 
              }
          }
      }
    if(n>1)prime_factor.pb(n);
}

int main()
{
    #ifdef EXTRA_8
        clock_t tStart = clock();
        freopen("input.txt","r",stdin);
        freopen("ans.txt","w",stdout);
    #endif

      int n;
      while(cin>>n)
      {
         if(n==0)return 0;
         if(n==1)cout<<1<<endl;

          primeFactorization(n);
          for(int i=0; i<prime_factor.size(); i++)
            cout<<prime_factor[i]<<" ";
          // while(1)
          // {
          //   if(x%10!=0)
          //   {
          //     cout<<x%10<<endl;
          //     break;
          //   }
          //   x/=10;
          // }
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
