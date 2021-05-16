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
    int i, n, a, b;
    char x;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a>>x>>b;

        if(x>=65 && x<=90)
        {

            if(a==b)
            {
                printf("%d\n", a*b);
            }
            else
            {
                printf("%d\n", b-a);
            }
        }
        else if(a==b)
        {
            printf("%d\n", a*b);
        }
        else if(x>=97 && x<=122)
        {
            printf("%d\n", a+b);
        }
    }

    return 0;
}
