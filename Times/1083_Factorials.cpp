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
    int n, i, ln, cnt;
    string s;
    cin>>n>>s;
        ln = s.size();
        cnt=1;
        while(n>1){
            cnt*=n;
            n-=ln;
        }
    cout<<cnt<<endl;

    return 0;
}
