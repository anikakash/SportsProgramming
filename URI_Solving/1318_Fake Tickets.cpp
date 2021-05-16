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
    int n, m, i, j;

    while(cin>>n>>m && n!=0 && m!=0)
    {
        int arr[10005];
        for(j=1; j<=m; j++){
            arr[j] = 0;
        }
        for(i=1; i<=m; i++){
            int x;
            cin>>x;
            arr[x]++;
        }
        int fake=0;
        for(i=1; i<=n; i++){

            if(arr[i]>1) fake++;
        }
        cout<<fake<<endl;
    }
    return 0;
}
