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
#define mx           100005

typedef long long int       ll;
typedef double              dl;
typedef unsigned long long  ul;

// --------------------------Pre made Functions & Proto Type--------------------------//
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}


vector<ll>prime;
bool vis[mx];  //mx is define in above of the code;
void sieve() {
    ll x=sqrt((int)mx);
    for(ll i=3; i<=x; i+=2) {
        if(vis[i]==0) {
            for(ll j=i*i; j<mx; j+=2*i)
                vis[j]=1;
        }
    }
    prime.pb(2);
    for(ll i=3; i<mx; i+=2)
        if(vis[i]==0)
            prime.pb(i);
}

ll checker(ll n, ll m)
{
    ll counter=0;
    for(ll i = m; i<=n; i*=m) counter+=n/i;
    return counter;
}


int main()
{
    #ifdef EXTRA_8
        clock_t tStart = clock();
        freopen("input.txt","r",stdin);
        freopen("out.txt","w",stdout);
    #endif
        sieve();
    ll n, m;
    while(cin>>n>>m)
    {
        ll m1 = m;
        bool flg = false;
            for(ll i=0; prime[i]*prime[i]<=m; i++)
            {
                if(m%prime[i]==0)
                {
                    int cnt=0;
                    while(m%prime[i]==0)
                        {
                             m/=prime[i];
                             cnt++;
                        }
                    if(checker(n,prime[i])<cnt)
                    {
                        flg = true;
                        break;
                    }
                }
            }
            if(m>1) if(checker(n,m)<1) flg = true;
        
        if(flg)cout<<m1<<" does not divide "<<n<<"!"<<endl;
        else cout<<m1<<" divides "<<n<<"!"<<endl;
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
