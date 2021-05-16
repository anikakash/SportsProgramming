#include<bits/stdc++.h>
#define pi acose(-1)
#define rep(i,x) for(int i=1; i<=(x); i++)
typedef long long ll;
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll ans = 0;
    rep(i,n)
    {
        ll y = n/i;

        ans+=(y*(y+1)*i)/2;
    }
    cout << ans << endl;

    return 0;
}
