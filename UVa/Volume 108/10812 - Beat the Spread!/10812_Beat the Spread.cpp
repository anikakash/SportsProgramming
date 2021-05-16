#include<bits/stdc++.h>
using namespace    std;

#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define fasterio     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL           printf("\n")
#define pi           acos(-1.0) //3.1415926535897932384626
#define mx           7500000
#define dpoint(x)    fixed<<setprecision(x)
#define mod          1000000007
#define pb           push_back
#define scn(x)       scanf("%d",&x)
#define scnd(x)      scanf("%lf",&x)
#define sc(x)        scanf("%s",&x)
#define debug(x)     cout<<x<<endl;

typedef long long int       ll;
typedef double              dl;
typedef unsigned long long  ul;

// --------------------------Pre made Functions & Proto Type--------------------------//
template <class T> T gcd(T a, T b){if(a == 0) return b;return gcd ( b%a, a );}
template <class T> T lcm(T a, T b){return ( ( a/gcd ( a, b ) )*b );}
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}


int main()
{
   #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("out.txt","w",stdout);
   #endif
  
    int t;
    cin>>t;

    while (t--)
    {
        ll s ,d;
        cin>>s>>d;
        if(d>s) cout<<"impossible"<<endl;
        else if(((s%2==0) && (d%2!=0)) || ((s%2!=0) && (d%2==0))) cout<<"impossible"<<endl;
        else
        {
            ll x, y;
            x = (s+d)/2;
            y = (s-d)/2;
            cout<<x<<" "<<y<<endl;
        }
    }
    
    return 0;
}
/// ----------------------------Funaction Descriptions----------------------------------//

