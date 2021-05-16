//thanks God For Every Thing!
//contest link:
#include<bits/stdc++.h>
#define pi           acose(-1)
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


using namespace std;

typedef long long int           ll;
typedef double                  dl;

long long int sieve(ll n);

int main()
{
    wow
    ll  t;
    cin>>t;
    for(ll i=1; i<=t; i++)
    {
        ll w, n, od, evn, test=1;
        cin>>w;
        n =w/2;
        for(ll j=2; j<n; j*=2)
        {
            if(w%j==0)
            {
                od = w/j;
                evn = j;
                if(od%2!=0)
                {
                    test=0;
                    break;
                }
            }
        }
        if(test==0){
            printf("Case %d: %lld %lld\n", i, od, evn);
        }
        else{
            printf("Case %d: Impossible\n", i);
        }

    }

    return 0;
}
