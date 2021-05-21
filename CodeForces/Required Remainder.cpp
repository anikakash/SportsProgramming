//Author: anikakash;
//contest link: https://codeforces.com/contest/1374/problem/A
#include<bits/stdc++.h>

#define pi                  acose(-1)
#define rep(i,x)            for(int i=0; i<(x); i++)
#define rep1(i,x)            for(int i=0; i<=(x); i++)

typedef long long int       ll;
typedef double              dl;
using namespace std;

int main()
{
    int t, x, y, n, result;
    dl value, ans;
    cin>>t;
    rep(i,t){
        cin>>x>>y>>n;
        ans = n/x;
        value = floor(ans);
        result = (value*x)+y;
        if(result>n){
                result=0;
            value = value-1;
            result = (value*x)+y;
        }
        printf("%d\n", result);

    }

    return 0;
}
//Thanks To God!
