#include<bits/stdc++.h>
using namespace    std;

#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define fasterio     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL           cout<<endl;
#define pi           acos(-1.0) //3.1415926535897932384626
#define mx           100005
#define dpoint(x)    fixed<<setprecision(x)
#define mod          1000000007
#define pb           push_back
#define scn(x)       scanf("%d",&x)
#define scnd(x)      scanf("%lf",&x)
#define sc(x)        scanf("%s",&x)
#define pb           push_back
#define switch       0
#define switch1      0
#define Debug1(x)    cout<<"Value : "<<x<<endl;
#define Debug2       cout<<"List Print Check; ";

typedef long long int       ll;
typedef double              dl;
typedef unsigned long long  ul;

// --------------------------Pre made Functions & Proto Type--------------------------//
template <class T> T gcd(T a, T b){if(a == 0) return b;return gcd ( b%a, a );}
template <class T> T lcm(T a, T b){return ( ( a/gcd ( a, b ) )*b );}
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}
int  palindrom(int n);
int isPrime(int n);

int main()
{
//    #ifndef Brain_FUCK
//         freopen("input.txt","r",stdin);
//         freopen("out.txt","w",stdout);
//    #endif
   int n;
   while(cin>>n)
   {
        int pal=0, pri = 0;
        pri = isPrime(n);
        pal = palindrom(n);
       if(pal==1 && pri==1)
       {
           cout<<n*2<<endl;
           return 0;
       }
       else cout<<n*2<<endl;
    }
    return 0;
}

int isPrime(int n)
{
    if(n<2)return 1;
    else if(n==2)return 0;
    else
    {
        for(int i=3; i*i<=n; i+=2)
        {
            if(n%i==0)return 0;
        }
    }
    return 1;
}
int  palindrom(int n)
{
    string s;
    string c;
    s = to_string(n);
    c=s;
    reverse(s.begin(),s.end());
    if(c == s) return 1;
    else return 0;
}
