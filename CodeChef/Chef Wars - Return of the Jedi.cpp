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
    int t;
    cin>>t;
    while(t--){
            int H, P, ans, div;
        cin>>H>>P;
        while(P!=0){
            H=H-P;
            P/=2;
        }
        if(H>P){
            cout<<"0"<<endl;
        }
        else cout<<"1"<<endl;
    }
    return 0;
}
