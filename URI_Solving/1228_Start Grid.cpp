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
    int n, i, j;
    while(scanf("%d", &n)==1)
    {
        int shuru[n+2], shese[n+2], cnt=0;
        for(i=1; i<=n; i++)
        {
            cin>>shuru[i];
        }
        for(i=1; i<=n; i++)
        {
            cin>>shese[i];
        }

        for(i=1; i<=n; )
        {
            if(shuru[i]!=shese[i])
            {
                for(j=i+1; j<=n; j++)
                {
                    if(shuru[j]==shese[i])
                    {
                        swap(shuru[j], shuru[j-1]);
                        cnt++;
                        break;
                    }
                }
            }
            else
                i++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
