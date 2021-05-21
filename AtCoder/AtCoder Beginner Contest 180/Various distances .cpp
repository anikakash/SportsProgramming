//thanks God For Every Thing!
//contest link:

#include<bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>

/*

            

*/
#define pi           acose(-1)
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define NL           printf("\n")
#define fin          freopen("int.txt","r",stdin);
#define fout         freopen("out.txt","w",stdout);


using namespace std;

typedef long long int ll;
typedef double dl;

// ---------------------- slove---------------------------//

int main()
{
    //fin
    //fout

    ll n, x, big, sum=0, hi;
    dl sqr=0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sum += abs(x);
        sqr += x * x;

        if (i == 0)
        {
            big = abs(x);
        }
        else
        {
            big = max(big, abs(x));
        }
    }
    cout<<sum<<endl;
    cout<<setprecision(17)<<sqrt(sqr)<<endl;
    cout<<big<<endl;
    return 0;
}
