#include<bits/stdc++.h>
using namespace    std;

#define flush                   cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define fasterio                ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                      cout<<endl;
#define pi                      acos(-1.0) //3.1415926535897932384626
#define dpoint(x)               fixed<<setprecision(x)
#define debug(x)                cout<<x<<endl;
#define pb                      push_back
#define mx                      10000007
#define EPS                     1e-9
typedef long long int           ll;
typedef double                  dl;
typedef unsigned long long      ul;

// --------------------------Pre made Functions & Proto Type--------------------------//
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}
int gcd(int a, int b){ int x ; return x = __gcd(a, b);}
int lcm(int a, int b){int y; return y = ((a)*((b)/gcd(a,b)));}


dl x, y, c;
 dl rang(dl mid)
 {
   dl la = sqrt((x*x)-(mid*mid));
   dl lb = sqrt((y*y)-(mid*mid));

   return (1/lb)+(1/lb);
 }

int main()
{
   #ifdef anikakash
        clock_t tStart = clock();
        freopen("bruteInput.txt","r",stdin);
        freopen("bruteOut.txt","w",stdout);
   #endif
        
  
    int test;
    scanf("%d",&test);
    for(int caseno = 1; caseno<=test; caseno++)
    {
         scanf("%lf %lf %lf",&x, &y, &c);
         dl lo = min(x,y), hi = max(x,y), mid, ans;
         // while(lo<=hi)
         // {
         //    mid = lo+(hi-lo)/2.0;
         //    if(rang(mid)<=c)
         //    {
         //       ans = mid;
         //       hi = mid;
         //    }
         //    else lo = mid;
         // }
         // printf("Case %d: %0.10lf\n",caseno,ans);
         int t;
         cin>>t;
         while(t--)
            {
               int x;
               cin>>x;
               cout<<rang(x)<<endl;
            }
    }


   #ifdef anikakash
      fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
   #endif

    return 0;
}

