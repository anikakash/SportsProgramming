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
#define gcd(a,b)     __gcd(a,b);
#define lcm(x,y)     (a * (b / gcd(a, b)));

typedef long long int       ll;
typedef double              dl;
typedef unsigned long long  ul;

// --------------------------Pre made Functions & Proto Type--------------------------//
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}

int main()
{
     #ifndef ONLINE_JUDGE
        clock_t tStart = clock();
        freopen("input.txt","r",stdin);
        freopen("ans.txt","w",stdout);
     #endif
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        dl a,b,c,d;
        cin>>a>>b>>c>>d;
        dl s = (a+b+c+d)/2.0;
        dl ans = ((c+a)/(c-a) * (sqrt((s-a)*(s-c)*(s-a-b)*(s-a-d))));
        if(ans<0) ans*=-1; 
        cout<<dpoint(6) <<"Case "<<i<<": "<<ans<<endl;
    }
     #ifndef ONLINE_JUDGE
        fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
     #endif
    return 0;
}
