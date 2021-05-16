//thanks God For Every Thing!
//contest link:
#include<bits/stdc++.h>
#define pi                      acose(-1)
#define max                     170000
typedef long long int           ll;
typedef double                  dl;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, tem;
    cin>>t;
    tem = t;
    ll n, ans=0;
    while(t--){
        cin>>n;
    ans+=n;
    }
    long double sl;
    sl = ((ans*1.0)/tem*1.0);
    printf("%.12Lf\n", sl);
    return 0;
}

