//thanks God For Every Thing!
//contest link:
#include<bits/stdc++.h>
#define pi                      acose(-1)
#define max                     170000

typedef long long int           ll;
typedef double                  dl;
using namespace std;
const int mx = 1e2+5;
int main()
{
    /*ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);*/
    int  t;
    scanf("%d",&t);
    while(t--)
    {
        long double p;
        scanf("%Lf", &p);
        p = (sqrt((8.00*p)-7.00)-1.00)/2.00;
        if(t==0)
        {
            if(p==int(p)){
                printf("1\n");
            }
            else{
                printf("0\n");
            }
        }
        else
        {
            if(p==int(p)){
                printf("1 ");
            }
            else{
                printf("0 ");
            }
        }
    }
    return 0;
}
