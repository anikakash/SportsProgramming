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

    int n, i, sm, index;
    cin>>n;
    int num[n];
    for(i=0; i<n; i++)
    {
        cin>>num[i];
    }
    sm = num[0];
    index = 0;
    for(i=1; i<n; i++)
    {
        if(sm>num[i])
        {
            sm = num[i];
            index = i;

        }
    }
    cout<<"Menor valor: "<<sm<<endl;
    cout<<"Posicao: "<<index<<endl;
    return 0;
}

