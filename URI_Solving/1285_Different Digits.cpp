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
    int i, cnt=0, n, m, rep=0;
    while(cin>>n>>m){
        for(i=n; i<=m; i++)
    {
        int dig[4], c=0;
        int num = i;
        while(num!=0){
            dig[c] = num%10;
            num/=10;
            c++;
        }
        int x, y, cnt=0;
        for(x=0; x<c; x++){
            for(y=x+1; y<c; y++){
                if(dig[x]==dig[y]){
                    cnt=1;
                }
            }
        }
        if(cnt==0) rep++;
    }

    cout<<rep<<endl;
    rep = 0;
    }

    return 0;
}
