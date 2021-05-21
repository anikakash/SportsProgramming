//thanks God For Every Thing!
//contest link:

//#include<bits/stdc++.h>
#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<cstdio>
#define pi           acose(-1)
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define NL           printf("\n")
#define fin          freopen("int.txt","r",stdin);
#define fout         freopen("out.txt","w",stdout);

using namespace std;

typedef long long int           ll;
typedef double                  dl;

// ---------------------- slove---------------------------//


int main()
{

    int t;
    scanf("%d",&t);
    for(int j=1; j<=t; j++)
    {

        ll n;
        ll x, last, first, mid, c, r, diff;
        scanf("%lld",&n);

        x = (sqrt(n-1))+1;
        last = x*x;

        first = ((x-1)*(x-1))+1;

        mid = (last+first)/2;

        if(n>mid && n<=last)
        {
            c = x;
            diff = last-n;
            r = diff+1;
        }
        else if(n<mid && n>=first)
        {
            diff = mid-n;
            c = x-diff;
            r = x;

        }
        else
        {
            c = x;
            r = x;
        }

        if(x%2==0)
        {
            printf("Case %d: %lld %lld\n",j,c,r);
        }
        else
        {
            printf("Case %d: %lld %lld\n",j,r,c);
        }

    }



    return 0;
}

