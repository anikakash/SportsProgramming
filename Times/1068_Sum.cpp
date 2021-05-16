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
    int n, i, cnt=0;
    cin>>n;
    if(n>0){
        for(i=1; i<=n; i++){
            cnt+=i;
        }
    }
    else if(n<0){
        for(i=n; i<=1; i++){
            cnt+=i;
        }
    }
    else if(n==0){
        cnt=1;
    }
    cout<<cnt<<endl;
    return 0;
}
