#include<bits/stdc++.h>
using namespace    std;

#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define fasterio     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL           cout<<endl;
#define pi           acos(-1.0) //3.1415926535897932384626
#define dpoint(x)    fixed<<setprecision(x)
#define debug(x)     cout<<x<<endl;
// #define gcd(a,b)     __gcd(a,b);
// #define lcm(x,y)     (a * (b / gcd(a, b)));
#define pb           push_back
#define mx           10000007

typedef long long int       ll;
typedef double              dl;
typedef unsigned long long  ul;

// --------------------------Pre made Functions & Proto Type--------------------------//
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}
ul gcd(ul a, ul b){ ul x ; return x = __gcd(a, b);}
ul lcm(ul a, ul b){ul y; return y = ((a)*((b)/gcd(a,b)));}

int main()
{
    #ifdef EXTRA_8
        clock_t tStart = clock();
        freopen("input.txt","r",stdin);
        freopen("ans.txt","w",stdout);
    #endif
        ul x = lcm(1,2);
        for(ul i=3; i<=256; i++)
            x = lcm(x,i);

            cout<<x<<endl;
    #ifdef EXTRA_8
        fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
    #endif
    return 0;
}
