#include<bits/stdc++.h>
using namespace    std;

#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define fasterio     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL           printf("\n")

typedef long long int       ll;
typedef double              dl;
typedef unsigned long long  ul;

// ------------------------------------Constants-------------------------------------//

#define pi           acos(-1.0) //3.1415926535897932384626
#define mx           7500000
#define dpoint(x)    fixed<<setprecision(x)
#define mod          1000000007
#define pb           push_back
#define scn(x)       scanf("%d",&x)
#define scnd(x)      scanf("%lf",&x)

// --------------------------Pre made Functions & Proto Type--------------------------//
template <class T> T gcd(T a, T b){if(a == 0) return b;return gcd ( b%a, a );}
template <class T> T lcm(T a, T b){return ( ( a/gcd ( a, b ) )*b );}
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}

int binaryToDec(int x)
{
    int ans=0, i=0, rem;
    while(x!=0)
    {
        rem = x%10;
        x/=10;
        ans+=rem*pow(2,i);
        i++;
    }
    return ans;
}
 // --------------------------------------Global--------------------------------------//


 // -------------------------------------slove----------------------------------------//
 //Code Status :ac ;name: ;
int main()
{
   #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("out.txt","w",stdout);
   #endif
       int t;
        scn(t);
        for(int i=1; i<=t; i++)
        {
            int a, b, c, d, a1, b1, c1, d1;
            scanf("%d.%d.%d.%d", &a,&b,&c,&d);
            scanf("%d.%d.%d.%d", &a1,&b1,&c1,&d1);

            int binary1,binary2,binary3,binary4;
            binary1 = binaryToDec(a1);
            binary2 = binaryToDec(b1);
            binary3 = binaryToDec(c1);
            binary4 = binaryToDec(d1);
            if(a==binary1 && b==binary2 && c==binary3 && d==binary4)printf("Case %d: Yes\n",i);
            else printf("Case %d: No\n",i);

        }      
       
       return 0;
}
/// ----------------------------Funaction Descriptions----------------------------------//


//author anikaksh;
