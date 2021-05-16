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
    int t, i, cnt=0;
    cin>>t;
    for(i=0; i<1000; i++){
        cout<<"N["<<i<<"] = "<<cnt<<endl;
        cnt++;
        if(cnt==t) cnt=0;
    }

    return 0;
}

