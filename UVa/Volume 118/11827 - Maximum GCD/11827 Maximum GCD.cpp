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
template <class T> T gcd(T a, T b)
{
    if(a == 0) return b;
    return gcd(b%a, a);
}
template <class T> T lcm(T a, T b)
{
    return ((a*b)/gcd(a, b));
}

// ----------------------Slove---------------------------//

int main()
{
    //fin
    //fout
    int t;
    cin>>t;
    flush
    while(t--)
    {
        int  i=0, g=0, big=0, ln=0;

        string s;
        getline(cin,s);
        istringstream ff(s);
        int arr[100],tmp, index=0, cnt=0;
        while(ff>>tmp)
        {
            arr[index++]=tmp;
            cnt++;
        }

        for(int j=0; j<cnt; j++)
        {
            for(int k=j+1; k<cnt; k++)
            {

                g = gcd(arr[j],arr[k]);
                if(g>big)
                {
                    big = g;
                }
            }
        }
        cout<<big<<endl;
    }

    return 0;
}
//author anikaksh;
