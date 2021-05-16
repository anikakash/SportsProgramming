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
#define NL           printf("\n")

using namespace std;

typedef long long int           ll;
typedef double                  dl;

// ---------------------- slove---------------------------//


int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        if(i%2!=0) cout<<"I hate";
        else if(i%2==0) cout<<"I love";
        if(i<n)cout<<" that ";
        else if(i==n)cout<<" it";
    }
    NL;


    return 0;
}

