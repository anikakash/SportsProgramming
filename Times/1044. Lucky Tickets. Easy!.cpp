#include<bits/stdc++.h>
using namespace    std;

#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define fasterio     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL           printf("\n")



//who cares? I want to give some scary looks to my code... XD//


typedef long long int       ll;
typedef double              dl;
typedef unsigned long long  ul;

// ------------------------------------Constants-------------------------------------//

#define pi           (acos(-1.0)) //3.1415926535897932384626
#define mx           7500000
#define dpoint(x)    fixed<<setprecision(x)
#define mod           1000000007

// --------------------------Pre made Functions & Proto Type--------------------------//

template <class T> T gcd(T a, T b){if(a == 0) return b;return gcd ( b%a, a );}
template <class T> T lcm(T a, T b){return ( ( a/gcd ( a, b ) )*b );}
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}

int limt(int a, int x){
  int bas=1;
    for(int i=0; i<x; i++){
      bas*=a;
    }
  return bas;
}


 // --------------------------------------Global--------------------------------------//
int n;
int ar[38];

 // -------------------------------------slove----------------------------------------//
 //Code Status : ;name: Agent J;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("int.txt","r",stdin);
        freopen("ans2.txt","w",stdout);
    #endif
          cin>>n;
          for(int i=0; i<limt(10, n/2); i++){
              int s = digitsum(i);
              ar[s]++;
          }

          int ans=0;
          for(int i=0; i<limt(10, n/2); i++){
              int s = digitsum(i);
              ans+=ar[s];
          }
          
          cout<<ans<<endl;
    return 0;
}
/// ----------------------------Funaction Descriptions----------------------------------//


//author anikaksh;
//trust me ur the competitor of your own, not ur friend!
//Thanks To My Seniors and frndzz who help me all the time's
//Contest link:https://acm.timus.ru/problem.aspx?num=1313
