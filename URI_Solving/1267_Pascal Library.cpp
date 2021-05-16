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
    int n, d, i, j, cnt;
    while(1)
    {
        cin>>n>>d;
        if(n==0 && d==0) break;
        int ar[n][d];
        for(i=0; i<n; i++){
            for(j=0; j<d; j++){
                cin>>ar[i][j];
            }
        }

        for(i=0; i<n; i++){
            cnt=0;
            for(j=0; j<d; j++){
                if(ar[i][j]) cnt++;
            }
            if(cnt==d){
                    cout<<"yes"<<endl;
            break;
            }
        }

        if(cnt!=d) cout<<"no"<<endl;

    }
    return 0;
}
