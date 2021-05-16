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
template <class T> T binaryToDec(T x){T ans=0, i=0, rem;while(x!=0){rem = x%10;x/=10;ans+=rem*pow(2,i);i++;}return ans;}
int nod(int n)
{
   int c=0;
    for(int i=1; i*i<=n; i++)if(n%i==0)c+=(1+(i*i!=n));
        return c;
}
bool cmp(int &a, int &b)
{
    if(nod(a)<nod(b))
        return true;
    else if(nod(a)==nod(b))
    {
        if(a>b)
            return true;
        else return false;
    }
    else return false;
}
int main()
{
   #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("out.txt","w",stdout);
   #endif
    
    vector<int>v;
    for(int i=1; i<=1000; i++)
        v.push_back(i);

    sort(v.begin(), v.end(), cmp);
    
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int x;
        cin>>x;
        cout<<"Case "<<i<<":"<<v[x-1]<<endl;
    }
    return 0;
}
/// ----------------------------Funaction Descriptions----------------------------------//


//author anikaksh;