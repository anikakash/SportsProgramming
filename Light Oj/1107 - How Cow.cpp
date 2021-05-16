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
template <class T> T gcd(T a, T b){ if(a == 0) return b; return gcd(b%a, a); }
template <class T> T lcm(T a, T b){ return ((a*b)/gcd(a, b)); }

// ----------------------Slove---------------------------//

int main()
{
    fin
    fout
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        printf("Case %d:\n",i);
        int x1, x2, y1, y2, n;
        scanf("%d %d %d %d",&x1, &y1, &x2, &y2);
        scanf("%d",&n);
        for(int j=1; j<=n; j++)
        {
            int cx, cy;
            scanf("%d %d",&cx, &cy);
            if(((x1<=cx) && (cx<=x2)) &&((y1<=cy) && (cy<=y2))) printf("Yes\n");
            else printf("No\n");
        }
    }
    return 0;
}
//author anikaksh;
