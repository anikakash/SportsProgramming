//thanks God For Every Thing!
//contest link:
#include<bits/stdc++.h>
#define pi           acose(-1)
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define max          170000

using namespace std;

typedef long long int           ll;
typedef long double             ld;
typedef double                  dl;



int main()
{
    wow
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        int a, b, c;
        cin>>a>>b>>c;
        if((a*a + b*b == c*c) || (a*a + c*c == b*b) || (c*c + b*b == a*a)){
            printf("Case %d: yes\n",i);
        }
        else printf("Case %d: no\n",i);

    }
    return 0;
}

