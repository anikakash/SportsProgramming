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
    int t, n, i, cnt=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1; i<n; i++)
        {
            if(n%i==0)
            {
                cnt+=i;
            }
        }
        if(cnt==n) cout<<n<<" eh perfeito"<<endl;
        else cout<<n<<" nao eh perfeito"<<endl;
        cnt=0;

    }
    return 0;
}

