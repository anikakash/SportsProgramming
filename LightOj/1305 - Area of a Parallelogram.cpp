#include<bits/stdc++.h>
using namespace             std;

#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define fasterio     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL           printf("\n")
#define fin          freopen("int.txt","r",stdin)
#define fout         freopen("out.txt","w",stdout)
#define pb       push_back

//who cares? I want to give some scary looks to my code... XD//


typedef long long int       ll;
typedef double              dl;
typedef unsigned long long  ul;

// ------------------------------------Constants-------------------------------------//

#define pi           (acos(-1.0)) //3.1415926535897932384626
#define mx           50006
#define dpoint(x)    fixed<<setprecision(x)

// --------------------------Pre made Functions & Proto Type--------------------------//

template <class T> T gcd(T a, T b){if(a == 0) return b;return gcd ( b%a, a );}
template <class T> T lcm(T a, T b){return ( ( a/gcd ( a, b ) )*b );}
template <class T> T Digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}
void sieve();

 // --------------------------------------Global--------------------------------------//

vector<int>prime;
bool vis[mx];

 // -------------------------------------slove----------------------------------------//
int main()
{
   //fin;
   //fout;
   //fasterio;

   int ax, ay, bx, by, cx, cy, dx, dy, t;
   scanf("%d",&t);
   for(int i=1; i<=t; i++){
       dx=0,dy=0;
       int area=0;
       scanf("%d %d %d %d %d %d", &ax, &ay, &bx, &by, &cx, &cy);
       dx = ax+cx-bx;
       dy = ay+cy-by;
       area = 0.5*( ( (ax*by) + (bx*cy) + (cx*dy) + (dx*ay) ) - ( (ay*bx) + (by*cx) + (cy*dx) + (dy*ax) ) );

       if(area<0) area*=-1;

       printf("Case %d: %d %d %d\n",i,dx,dy,area);
   }
   
    return 0;
}

// ----------------------------Funaction Descriptions----------------------------------//

void sieve() {
    int x=sqrt((int)mx);
    for(int i=3; i<=x; i+=2) {
        if(vis[i]==0) {
            for(int j=i*i; j<mx; j+=2*i)
                vis[j]=1;
        }
    }
    prime.push_back(2);
    for(int i=3; i<mx; i+=2)
        if(vis[i]==0)
            prime.push_back(i);
}
//author anikaksh; 
//trust me ur the competitor of your own, not ur friend!
//Thanks To My Seniors and frndzz who help me all the time's
//Contest link: 