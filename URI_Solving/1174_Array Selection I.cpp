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
    int  i;
    dl n,  ar[100];
    for(i=0; i<100; i++){
        cin>>ar[i];
    }
    for(i=0; i<100; i++){
        if(ar[i]<=10.0) printf("A[%d] = %.1lf\n", i, ar[i]);
    }

    return 0;
}

