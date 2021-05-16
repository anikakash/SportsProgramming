#include<bits/stdc++.h>
using namespace    std;

#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define fasterio     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL           cout<<endl;
#define pi           acos(-1.0) //3.1415926535897932384626
#define dpoint(x)    fixed<<setprecision(x)
#define mod          1000000007
#define pb           push_back
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
    // #ifndef ONLINE_JUDGE
    //     clock_t tStart = clock();
    //     freopen("input.txt","r",stdin);
    //     freopen("out.txt","w",stdout);
    // #endif

    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int h1, m1, h2, m2;
        int a1, b1, a2, b2;
        char ch;
        cin>>h1>>ch>>m1;
        cin>>h2>>ch>>m2;

        cin>>a1>>ch>>b1;
        cin>>a2>>ch>>b2;

        int w_stime = (h1*60)+m1;
        int w_etime = (h2*60)+m2;

        int o_stime = (a1*60)+b1;
        int o_etime = (a2*60)+b2;
        //cout<<w_stime<<" "<<w_etime<<" "<<o_stime<<" "<<o_etime<<endl;

        if((w_stime <= o_stime && o_stime <= w_etime) || (w_stime <= o_etime && o_etime <= w_etime))
            cout<<"Case "<<i<<": Mrs Meeting"<<endl;
        else if((o_stime <= w_stime && w_stime <= o_etime) || (o_stime <= w_etime && w_etime <= o_etime))
            cout<<"Case "<<i<<": Mrs Meeting"<<endl;
        
        else cout<<"Case "<<i<<": Hits Meeting"<<endl;
    }
     
    return 0;
}