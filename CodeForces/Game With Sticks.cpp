//thanks God For Every Thing!
//contest link:
#include<bits/stdc++.h>
#define pi                      acose(-1)
#define max                     170000
typedef long long int           ll;
typedef double                  dl;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, to, cnt=0;
    cin>>n>>m;
    to = n*m;
    while(to!=0){
        to-=n+m-1;
        n--;
        m--;
        cnt++;
    }
    if(cnt%2==0)cout<<"Malvika"<<endl;
    else cout<<"Akshat"<<endl;

    return 0;
}
