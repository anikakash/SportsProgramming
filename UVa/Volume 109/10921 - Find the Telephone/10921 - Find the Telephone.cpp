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
//   #ifndef ONLINE_JUDGE
//       freopen("input.txt","r",stdin);
//       freopen("out.txt","w",stdout);
//   #endif


    while(getline(cin,s))
    {
       int ln=s.size();
        for(int i=0; i<ln; i++)
        {
            if(s[i]>='0' && s[i]<='9')cout<<s[i];
            else if(s[i]=='-') cout<<s[i];
            else if(s[i]=='A' || s[i]=='B' || s[i]=='C') cout<<2;
            else if(s[i]=='D' || s[i]=='E' || s[i]=='F') cout<<3;
            else if(s[i]=='G' || s[i]=='H' || s[i]=='I') cout<<4;
            else if(s[i]=='J' || s[i]=='K' || s[i]=='L') cout<<5;
            else if(s[i]=='M' || s[i]=='N' || s[i]=='O') cout<<6;
            else if(s[i]=='P' || s[i]=='Q' || s[i]=='R' || s[i]=='S') cout<<7;
            else if(s[i]=='T' || s[i]=='U' || s[i]=='V') cout<<8;
            else if(s[i]=='W' || s[i]=='X' || s[i]=='Y' || s[i]=='Z') cout<<9;
        }
        cout<<endl;
        s.clear();
    }
    return 0;
}