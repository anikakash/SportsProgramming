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
    int x, y, z, ans;
    while(1)
    {
        int s, e;
        cin>>x;
        if(x==0) break;
        else
        {
            cin>>y>>z;
            s = x*y;
            e = (s*100)/z;
            ans = sqrt(e);
            cout<<ans<<endl;
        }

    }
    return 0;
}

