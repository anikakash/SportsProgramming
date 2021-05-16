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
    dl n;
    cin >> n;

    printf("N[%d] = %.4f\n", 0, n);

    for(int i = 1; i < 100; i++){
            n = n/2.0;
            printf("N[%d] = %.4f\n", i, n);
    }
    return 0;
}

