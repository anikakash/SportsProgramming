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
    int n, h1;
    cin>>n;
    if(n%2==1)
    {
        cout<<"No"<<endl;
        return 0;
    }
    char str[n+5];
    for(int i=0; i<n; i++)
    {
        cin>>str[i];
    }
    int cnt=0;

    for(int i=0; i<n/2; i++)
    {
        if(str[i]!=str[n/2+i])
        {
            cout<<"No"<<endl;
            return 0;
        }
    }

    cout<<"Yes"<<endl;

    return 0;
}
