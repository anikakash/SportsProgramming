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

typedef long long int       ll;
typedef double              dl;
typedef unsigned long long  ul;

// --------------------------Pre made Functions & Proto Type--------------------------//
template <class T> T gcd(T a, T b){if(a == 0) return b;return gcd ( b%a, a );}
template <class T> T lcm(T a, T b){return ( ( a/gcd ( a, b ) )*b );}
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}

vector<ll>v;
vector<ll>lucu;

ll lowerBound(ll x)
{
    ll l=0, h=v.size()-1, m=0, ans=-1;
    while(l<=h)
    {
        m = l+(h-l)/2;
        if(v[m]>=x)
        {
            ans = m;
            h = m-1;
        }
        else l = m+1;
    }
    return ans;
}
ll upperBound(ll x)
{
    ll l=0, h=v.size()-1, m=0, ans=-1;
    while(l<=h)
    {
        m = l+(h-l)/2;
        if(v[m]<=x)
        {
            ans = m;
            l = m+1;
        }
        else h = m-1;
    }
    return ans;

}

int main()
{
   #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("out.txt","w",stdout);
   #endif
    ll n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
       ll x;
        cin>>x;
        v.pb(x);
    }
   ll s;
    cin>>s;
    for(int i=0; i<s; i++)
    {
        ll x;
        cin>>x;
        lucu.pb(x);
    }
    ll l, u;
   for(int i=0; i<s; i++)
   {
       l = lowerBound(lucu[i]);
       u = upperBound(lucu[i]);

        // cout<<"L "<<l<<endl;
        // cout<<"U "<<u<<endl;

        if(l==0)cout<<"X ";
        else if(l==-1)cout<<v[n-1]<<" ";
        else cout<<v[l-1]<<" ";

        if(u+1==n)cout<<"X"<<endl;
        else cout<<v[u+1]<<endl;
   }
    return 0;
}
/// ----------------------------Funaction Descriptions----------------------------------//

