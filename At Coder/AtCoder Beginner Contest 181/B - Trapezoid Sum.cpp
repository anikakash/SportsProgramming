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
#define fasterio     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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
    int n;
    scanf("%d",&n);
    ll a, b;
    ll sum=0;
    while(n--)
    {
      scanf("%lld %lld",&a, &b);
        ll x1=0, x2=0, y1=0, y2=0;

        y1 = a-1;
        //y2 = b-1;

        x1 = (y1*(y1+1))/2;
        x2 = (b*(b+1)/2);

      sum+=x2-x1;

    }
    printf("%lld\n", sum);
    
    
}

//author anikaksh;