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
     string s;
     getline(cin,s);
     int ln = s.size(),one=0;

        for(int i=0; i<ln; i++)
        {
            if(s[i]==s[i+1])
            {
                one++;
                if(one==6){
                  break;
                }
            }
            else {
              one=0;
            } 
        }
     

     if(one==6) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;

	return 0;
}
//author anikaksh;
