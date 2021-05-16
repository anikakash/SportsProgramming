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
#define mx           1000000009

typedef long long int       ll;
typedef double              dl;
typedef unsigned long long  ul;

// --------------------------Pre made Functions & Proto Type--------------------------//
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}


void Luphi( int n)
{
    int ans = n;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            while(n%i==0)n/=i;
            ans -=ans/i;
        }
    }
    if(n>1)ans-=ans/n;
    cout<<ans<<endl;
}

int main()
{
    #ifdef EXTRA_8
        clock_t tStart = clock();
        freopen("in.txt","r",stdin);
        freopen("ot.txt","w",stdout);
    #endif
        
       int n;
        while(cin>>n)
        {
            if(n==0)return 0;
            if(n==1)cout<<"0"<<endl;
            else Luphi(n);
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
