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
     #ifndef ONLINE_JUDGE
        clock_t tStart = clock();
        freopen("input.txt","r",stdin);
        freopen("out.txt","w",stdout);
     #endif
    char s[1000];
    int h,m,ss, speed =0;
    dl ans=0, time1=0, time2=0;
    while(gets(s))
    {
        sscanf(s,"%d:%d:%d", &h,&m,&ss);
        time1 = h+(m/60.0)+(ss/3600.0);
        if(s[8]=='\0')
        {
            ans+=(time1-time2)*speed;
            printf("%s %0.2lf km\n",s,ans);
        }
        else 
        {
            ans+=(time1-time2)*speed;
            sscanf(s+8,"%d",&speed);
        }
        time2 = time1;
    }
    return 0;
}
