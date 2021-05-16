//#include<bits/stdc++.h>
#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>

#define pi           (acos(-1.0)) //3.1415926535897932384626
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define fasterio     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define NL           printf("\n")
#define fin          freopen("int.txt","r",stdin);
#define fout         freopen("out.txt","w",stdout);

//who cares? I want to give some scary looks to my code... XD//
using namespace             std;
typedef long long int       ll;
typedef double              dl;
typedef unsigned long long  ul;

// ----------------------Pre made Functions---------------------------//

template <class T> T gcd(T a, T b){if(a == 0) return b;return gcd ( b%a, a );}
template <class T> T lcm(T a, T b){return ( ( a/gcd ( a, b ) )*b );}
template <class T> T Digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}

int fibo(int n){
    if(n==0 || n==1) return n;
    else n = fibo (n-1) + fibo (n-2);
    return n;
}
int factoril(int n){
    if(n<=1) return 1;
    else n = n*factoril(n-1);

    return n;
}

 // ----------------------------Slove----------------------------------//

int main()
{
   //fin
   //fout
   fasterio
   //fprintf(stdout, "%u\n", time(0));
   ll a, b, t;
   cin>>t;
   while(t--){
       cin>>a>>b;
        if(b%a!=0)cout<<"-1"<<endl;
        else cout<<gcd(a,b)<<" "<<lcm(a,b)<<endl;
   }
    return 0;
}
//author anikaksh; 
//trust me ur the competitor of your own, not ur friend!
//Thanks To My Seniors and frndzz who help me all the time's
//Contest link: 