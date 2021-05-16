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
    int t, n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        cin>>n;
        for(int i=0; i<s.size(); i++)
        {
            if((s[i]-n)<65)
            {
                s[i]=(s[i]-n)+26;
            }
            else
            {
                s[i]=s[i]-n;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}

