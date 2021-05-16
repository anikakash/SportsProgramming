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
    int t,b=0,a[200];
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
    }
    bool x=true;
    for(int i=0;i<t-1;i++)
    {
        if(a[i+1]<a[i])
        {
            x=false;
            cout<<i+2<<endl;
            break;
        }
    }
    if(x)
    cout<<"0"<<endl;
    return 0;
}
