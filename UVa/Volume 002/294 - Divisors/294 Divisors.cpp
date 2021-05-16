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
#define pb           push_back

typedef long long int       ll;
typedef double              dl;
typedef unsigned long long  ul;

// --------------------------Pre made Functions & Proto Type--------------------------//
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}
ll nod(ll n)
{
    ll cnt=0;
    for(ll i=1; i*i<=n; i++)
        if(n%i==0)cnt+=(1+(i*i!=n));
    return cnt;
}

int main()
{
    #ifdef EXTRA_8
        clock_t tStart = clock();
        freopen("input.txt","r",stdin);
        freopen("out.txt","w",stdout);
    #endif
     fasterio;
     ll test;

     while(cin>>test)
     {
        while(test--)
        {
            ll s,e, max=0, answer=0, tmp=0;
            cin>>s>>e;
            max = nod(s);
            answer = s;
            for(ll i=s+1; i<=e; i++)
            {
                tmp = nod(i);
                if(tmp>max)
                {
                    max = tmp; answer = i; 
                }
            }
            cout<<"Between "<<s<<" and "<<e<<", "<<answer<<" has a maximum of "<<max<<" divisors."<<endl;
        }
     }
       
    #ifdef EXTRA_8
        fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
    #endif
    return 0;
}