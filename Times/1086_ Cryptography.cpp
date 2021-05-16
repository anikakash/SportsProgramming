//thanks God For Every Thing!
//contest link:
#include<bits/stdc++.h>
#define pi                      acose(-1)

typedef long long int           ll;
typedef double                  dl;
using namespace std;
const int mx = 1e2+5;
void seive();
ll prime[170000];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll  t, a, x;
    scanf("%lld", &t);
    for(a=0; a<t; a++)
    {
        scanf("%lld", &x);
        seive();
        printf("%lld\n", prime[x-1]);
    }
    return 0;
}
void seive()
{
    ll n, i, j;
    n = 170000;
    ll m=0;
    prime[m++]=2; //prime initialize;

    bool vis[n]= {}; //making false value to check;
    for(i=3; i<=n; i+=2) //checker;
    {
        if(vis[i]==false)
        {
            prime[m++]=i; //store prime
            for(j=i*i; j<=n; j+=i+i) vis[j]=true; //cut off not prime;
        }
    }
}
