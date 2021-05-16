//thanks God For Every Thing!
//contest link:
#include<bits/stdc++.h>
#define pi                      acose(-1)

typedef long long int           ll;
typedef double                  dl;
using namespace std;
const int mx = 1e2+5;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, a, b, x, ans;
    cin>>t;
    while(t--){
        cin>>a>>b;
        x=(a+a)+(b+b);
        ans = x/2;
        cout<<ans<<endl;
    }
    return 0;
}

