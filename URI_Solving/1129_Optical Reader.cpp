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
    int n, a, b, c, d, e, i;
    while(scanf("%d", &n)&& n!=0)
    {
        for(i=0; i<n; i++)
        {
            int cnt =0;
            cin>>a>>b>>c>>d>>e;
            if(a<=127)
            {
                cnt++;
                a=1;
            }
            else a=0;
            if(b<=127)
            {
                b=1;
                cnt++;
            }
            else b=0;
            if(c<=127)
            {
                c=1;
                cnt++;
            }
            else c=0;
            if(d<=127)
            {
                d=1;
                cnt++;
            }
            else d=0;
            if(e<=127)
            {
                e=1;
                cnt++;
            }
            else e=0;

            if(cnt==1)
            {
                if(a==1) cout<<"A"<<endl;
                if(b==1) cout<<"B"<<endl;
                if(c==1) cout<<"C"<<endl;
                if(d==1) cout<<"D"<<endl;
                if(e==1) cout<<"E"<<endl;
            }
            else
            {
                cout<<"*"<<endl;
            }
        }
    }
    return 0;
}
