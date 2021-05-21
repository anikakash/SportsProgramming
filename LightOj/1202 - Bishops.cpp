//thanks God For Every Thing!
//contest link:
#include<bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#define pi           (acos(-1.0)) //3.1415926535897932384626
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define fasterio     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define NL           printf("\n")
#define fin          freopen("int.txt","r",stdin);
#define fout         freopen("out.txt","w",stdout);

using namespace std;
typedef long long int ll;
typedef double dl;
typedef unsigned long long ul;

// ----------------------Pre made Functions---------------------------//

template <class T> T gcd(T a, T b){if(a == 0) return b;return gcd(b%a, a);}
template <class T> T lcm(T a, T b){return ((a*b)/gcd(a, b));}



// ----------------------Slove---------------------------//

int main()
{
    //fin
    //fout
    int t;
    int  r1, c1, r2, c2;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        int x,y;
        scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
        x = abs(c1-c2);
        y = abs(r1-r2);

        if(x==y)printf("Case %d: 1\n",i);
        else
        {
            if(x%2==y%2)printf("Case %d: 2\n",i);
            else printf("Case %d: impossible\n",i);
        }


    }
    return 0;
}
//author anikaksh;
