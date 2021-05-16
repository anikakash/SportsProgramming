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
    int n, i, j, ln=0;
    char s[52];
    scanf("%d\n",&n);
    for(i=1; i<=n; i++)
    {
        gets(s);
        ln = strlen(s);
        if(s[0]>96 && s[0]<123)cout<<s[0];
        for(j=1; j<ln; j++)
        {
            if(s[j]>96 && s[j]<123)
            {
                if(s[j-1]<96 || s[j-1]>123)
                {
                    cout<<s[j];
                }
            }
        }
        cout<<endl;
    }

    return 0;
}

