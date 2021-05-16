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
    int n;
    string s;
    cin>>n;
    while(n--){
        cin>>s;
        if(s.size()==5) cout<<"3"<<endl;
        else if((s[0]=='t')&&(s[1]=='o') || (s[0]=='t')&&(s[1]=='w') || (s[1]=='w')&&(s[2]=='o')){
            cout<<"2"<<endl;
        }
        else cout<<"1"<<endl;
    }

    return 0;
}

