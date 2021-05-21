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


 // --------------------------------------Global--------------------------------------//


 // -------------------------------------slove----------------------------------------//
 //Code Status : ;name: Agent J;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("int.txt","r",stdin);
        freopen("ans2.txt","w",stdout);
    #endif
          int t;
          scanf("%d",&t);
          dl r1, r2, r3;
          for(int i=1; i<=t; i++){
              scanf("%lf %lf %lf",&r1,&r2,&r3);

              dl a=0.0, b=0.0, c=0.0, parameter=0.0;

              a = r1+r2; b = r1+r3; c = r2+r3;
              parameter = (a+b+c)/2.0;

              dl triAre = sqrt(parameter*(parameter-a)*(parameter-b)*(parameter-c));

              dl angle1 = acos((a*a+b*b-c*c)/(2*a*b));
              dl angle2 = acos((a*a+c*c-b*b)/(2*a*c));
              dl angle3 = acos((b*b+c*c-a*a)/(2*b*c));

              dl part1 = 0.5*r1*r1*angle1;
              dl part2 = 0.5*r2*r2*angle2;
              dl part3 = 0.5*r3*r3*angle3;

              dl ans = triAre-(part3+part2+part1);

              printf("Case %d: %.6f\n",i,ans);

          }

          
    return 0;
}
/// ----------------------------Funaction Descriptions----------------------------------//


//author anikaksh;
//trust me ur the competitor of your own, not ur friend!
//Thanks To My Seniors and frndzz who help me all the time's
//Contest link:https://acm.timus.ru/problem.aspx?num=1313
