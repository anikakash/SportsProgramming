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
    int t, n, x;
    dl z;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        z = n%4; // the [1, 7, 9, 3] sequence repeted after 4 time so mod by 4;
        if(z==0)printf("1\n");
        else if(z==1)printf("7\n");
        else if(z==2) printf("9\n");
        else if(z==3) printf("3\n");
    }

    return 0;
}
