#include<bits/stdc++.h>
using namespace    std;
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

                                                
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define fasterio     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL           cout<<endl;
#define pi           acos(-1.0) //3.1415926535897932384626
#define dpoint(x)    fixed<<setprecision(x)
#define debug(x)     cout<<x<<endl;
#define gcd(a,b)     __gcd(a,b);
#define lcm(x,y)     (a * (b / gcd(a, b)));
#define pb           push_back
#define mx          100000005

typedef long long int       ll;
typedef double              dl;
typedef unsigned long long  ul;

// --------------------------Pre made Functions & Proto Type--------------------------//
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}
bool prime[mx];
void sieve()
{
    memset(prime, true, sizeof(prime));
    for(ll i = 4; i<mx; i+=2)prime[i]=false;
        prime[0]=prime[1]=false;
    for(ll i=3; i*i<=mx; i+=2)
    {
        if(prime[i])
        {
            for(ll j=i*i; j<mx; j+=2*i)prime[j]=false;
        }
    }


}

int main()
{
    #ifdef EXTRA_8
        clock_t tStart = clock();
        freopen("input.txt","r",stdin);
        freopen("out.txt","w",stdout);
    #endif
     sieve();
     ll n;
     while(scanf("%lld",&n)==1)
     {
        if(n & 1)
        {
            if(prime[n-2])printf("%lld is the sum of 2 and %lld.\n",n, n-2 );
            else printf("%lld is not the sum of two primes!\n",n);
        }
        else 
        {
            bool flg = true;
            for(ll i = n/2-1; i>=0; i--)
            {
                if(prime[i] && prime[n-i])
                {
                    printf("%lld is the sum of %lld and %lld.\n",n, i, n-i );
                    flg = false;
                    break;
                }
            }
            if(flg)printf("%lld is not the sum of two primes!\n",n);
        }
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
