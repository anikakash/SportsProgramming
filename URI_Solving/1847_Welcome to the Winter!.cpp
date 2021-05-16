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
    int x,y,z;

    cin>>x>>y>>z;

    if(x>y && z>=y)
        cout << ":)" << endl;
    else if (y>x && z<=y)
        cout << ":(" << endl;
    else if (y>x && z>y && z-y < y-x)
        cout << ":(" << endl;
    else if (y>x && z>y && z-y >= y-x)
        cout << ":)" << endl;
    else if (x>y && y>z && z-y > y-x )
        cout << ":)" << endl;
    else if (x>y && y>z && z-y <= y-x)
        cout << ":(" << endl;
    else if (x==y && z>y)
        cout << ":)" << endl;
    else if (x==y && z<y)
        cout << ":(" << endl;
    else cout << ":(" << endl;
    return 0;
}
