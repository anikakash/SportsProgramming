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
#define mod          1000000007
#define scn(x)       scanf("%d",&x)
#define scnd(x)      scanf("%lf",&x)

// --------------------------Pre made Functions & Proto Type--------------------------//

template <class T> T gcd(T a, T b){if(a == 0) return b;return gcd ( b%a, a );}
template <class T> T lcm(T a, T b){return ( ( a/gcd ( a, b ) )*b );}
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}


 // --------------------------------------Global--------------------------------------//


 // -------------------------------------slove----------------------------------------//
 //Code Status :ac ;name: Unlucky Bird;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("int.txt","r",stdin);
        freopen("ans2.txt","w",stdout);
    #endif
         int t;
         sc(t);
         for(int i=1; i<=t; i++){
              dl v1, v2, v3, a1, a2;
              scnd(v1);scnd(v2);scnd(v3);scnd(a1);scnd(a2);

              dl t1 = v1/a1;  //TIME BER KORSA ; BEG/SORON=TIME;
              dl t2 = v2/a2;

              dl s1 = 0.5*a1*t1*t1; //OTICRIANTO DURROTO BER KORSA; 1/2*TORON*TIME^2;
              dl s2 = 0.5*a2*t2*t2;  // s = ut+.5at^2; u==0 so ut =0;

              dl t3 = max(t1,t2);
              dl bird_s = t3*v3; // s = vt;

              dl total_time = s1+s2;

              printf("Case %d: %lf %lf\n",i , total_time, bird_s);
         }
          
    return 0;
}
/// ----------------------------Funaction Descriptions----------------------------------//


//author anikaksh;
//trust me ur the competitor of your own, not ur friend!
//Thanks To My Seniors and frndzz who help me all the time's
//Contest link:https://lightoj.com/problem/1311?problem=1311
