//thanks God For Every Thing!
//contest link:
//#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
#define pi           acose(-1)
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define max          170000

using namespace std;

typedef long long int           ll;
typedef double                  dl;


int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int p, l, sum, dn;
        cin>>p>>l;
        if(l>=p)
        {
            sum=l*4;
            int total=0;
            total = sum+19;
            cout<<"Case "<<i<<": "<<total<<endl;
        }
        else
        {
            dn = (p-l)*4;
            sum=p*4;
            int total=0;
            total = sum+dn+19;
            cout<<"Case "<<i<<": "<<total<<endl;
        }
    }


    return 0;
}
