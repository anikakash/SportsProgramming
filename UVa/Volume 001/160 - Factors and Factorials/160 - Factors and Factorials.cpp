#include<bits/stdc++.h>
using namespace    std;
//              _   _                    
//   __ _ _   _| |_| |__   ___  _ __   _ 
//  / _` | | | | __| '_ \ / _ \| '__| (_)
// | (_| | |_| | |_| | | | (_) | |     _ 
//  \__,_|\__,_|\__|_| |_|\___/|_|    (_)
                                      
//              _ _         _             _     
//   __ _ _ __ (_) | ____ _| | ____ _ ___| |__  
//  / _` | '_ \| | |/ / _` | |/ / _` / __| '_ \ 
// | (_| | | | | |   < (_| |   < (_| \__ \ | | |
//  \__,_|_| |_|_|_|\_\__,_|_|\_\__,_|___/_| |_|
//
                                                                                           
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define fasterio     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL           cout<<endl;
#define pi           acos(-1.0) //3.1415926535897932384626
#define dpoint(x)    fixed<<setprecision(x)
#define debug(x)     cout<<x<<endl;
#define gcd(a,b)     __gcd(a,b);
#define lcm(x,y)     (a * (b / gcd(a, b)));
#define pb           push_back
#define mx           100000007

typedef long long int       ll;
typedef double              dl;
typedef unsigned long long  ul;

// --------------------------Pre made Functions & Proto Type--------------------------//
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}


vector<int>prime = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59 ,61,67,71,73,79,83,89,97};
vector<int>prime_factor;
void Prime_Factorization(int n)
{
    prime_factor.clear();
    for(int i=0; prime[i]*prime[i]<=n; i++)
    {
        if(n%prime[i]==0)
        {
            while(n%prime[i]==0)
                {
                     n/=prime[i];
                     prime_factor.pb(prime[i]); 
                }
        }
    }
    if(n>1)prime_factor.pb(n);
}
int is_prime(ll n)
{
    ll i, root;
    if(n==2)
        return 1;
    if(n%2==0 || n==1)
        return 0;

    root = sqrt(n);
    for(i=3; i<=root; i = i+2)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    #ifdef EXTRA_8
        clock_t tStart = clock();
        freopen("in.txt","r",stdin);
        freopen("ot.txt","w",stdout);
    #endif
        

      int n;
      while(scanf("%d",&n)==1)
      {
        if(n==0)return 0;
        int prime_freq[105]={};
        for(int i=2; i<=n; i++)
        {   
            Prime_Factorization(i);
            //cout<<"Factor For "<<i<<endl;
            for(int j=0; j<prime_factor.size(); j++)
            {
                int x = prime_factor[j];
                prime_freq[x]++;
            }
        }
        int cnt=1;
        printf("%3d! =",n);
        printf("%3d",prime_freq[2]);
        for(int i=3; i<=n; i+=2)
            {
                
                if(is_prime(i))
                    {
                        if(cnt==15){printf("\n      ");}
                        printf("%3d",prime_freq[i]);cnt++;
                    }
            }
        printf("\n");
      }
        // Prime_Factorization(6);
        // for(int i=0; i<prime_factor.size(); i++)
        //     cout<<prime_factor[i]<<" ";
       
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
