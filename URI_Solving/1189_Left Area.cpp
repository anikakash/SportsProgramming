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
    int l, i, j;
    char t;
    dl num[12][12], sum=0.0;
    cin>>t;
    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            cin>>num[i][j];
            if(i>j && j<11-i){
                sum+=num[i][j];
            }
        }
    }
    if(t=='S') printf("%.1lf\n", sum);
    else printf("%.1lf\n", sum/30.0);

    return 0;
}
