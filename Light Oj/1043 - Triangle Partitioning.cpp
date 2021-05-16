//thanks God For Every Thing!
//contest link: http://lightoj.com/volume_showproblem.php?problem=1043
#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
#define pi                      acose(-1)
#define rep(i,x)                for(int i=0; i<(x); i++)
#define rep1(i,x)               for(int i=1; i<=(x); i++)

typedef long long int           ll;
typedef double                  dl;
using namespace std;

int main()
{
    int t;
    cin>>t;
    dl ab, ac, bc, rsio, ans;
    rep1(i,t){
        scanf("%lf %lf %lf %lf", &ab, &ac, &bc, &rsio);
        ans = ab*(sqrt(rsio)/sqrt(rsio+1));
        printf("Case %d: %lf\n", i, ans);

    }
    return 0;
}
//author: ANIKAKSH;

