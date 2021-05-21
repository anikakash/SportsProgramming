//thanks God For Every Thing!
//contest link:http://www.lightoj.com/volume_showproblem.php?problem=1433
//#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
#define pi                      acose(-1)
#define rep(i,x)                for(int i=0; i<(x); i++)
#define rep1(i,x)               for(int i=1; i<=(x); i++)

typedef long long int           ll;
typedef double                  dl;
//using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    rep1(i,t)
    {
        int  ox, oy, ax, ay, bx, by;
        scanf("%d %d %d %d %d %d", &ox, &oy, &ax, &ay, &bx, &by);
        dl A,C,B;
        A = sqrt(((ox-ax)*(ox-ax))+((oy-ay)*(oy-ay)));

        //B = sqrt(((ox-bx)*(ox-bx))+((oy-by)*(oy-by))); cause A = B; so find any one is okay;
        C = sqrt(((bx-ax)*(bx-ax))+((by-ay)*(by-ay)));

        dl ang, ans;
        ang = acos(((A*A)+(A*A)-(C*C))/(2.0*A*A)); // law of  cosine;

        ans = A*ang; // s = r * theta; formula;


        printf("Case %d: %lf\n", i, ans);
    }
    return 0;
}
//author: ANIKAKSH;
