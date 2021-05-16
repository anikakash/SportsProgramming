#include<bits/stdc++.h>
using namespace    std;

#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define fasterio     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL           cout<<endl;
#define pi           acos(-1.0) //3.1415926535897932384626
#define dpoint(x)    fixed<<setprecision(x)
#define debug(x)     cout<<x<<endl;
#define gcd(a,b)     __gcd(a,b);
#define lcm(x,y)     (a * (b / gcd(a, b)));

typedef long long int       ll;
typedef double              dl;
typedef unsigned long long  ul;

// --------------------------Pre made Functions & Proto Type--------------------------//
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}

ll NumberRevers(ll n)
{
    ll ans =0;
    while(n!=0)
    {
        ans = ans*10 + n%10;
        n/=10;
    }
    return ans;
}
int main()
{
    #ifdef EXTRA_8
        clock_t tStart = clock();
        freopen("input.txt","r",stdin);
        freopen("out.txt","w",stdout);
    #endif
        
       
       int x;
       cin>>x;
       while(x--)
       {
           ll s, ss;
           cin>>s;
           ss = NumberRevers(s);
           
          // cout<<ss<<endl;

           if(ss==s)cout<<"1 "<<ss<<endl;

           else 
           {
                int cnt=1;
                while(1)
                {
                    ll num = s+ss;
                    s = num;
                    ss = NumberRevers(s);
                    
                    if(ss==s)
                    {
                        cout<<cnt<<" "<<ss<<endl;
                        break;
                    }
                    cnt++;
                }
           }
           
       }
    #ifdef EXTRA_8
        fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
    #endif

    return 0;
}
