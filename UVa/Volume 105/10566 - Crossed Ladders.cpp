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

   return (la*lb)/(la+lb); // 1/c = 1/la + 1/lb;

 }

int main()
{
   #ifdef anikakash
        clock_t tStart = clock();
        freopen("in.txt","r",stdin);
        freopen("ot.txt","w",stdout);
   #endif
        
  while(scanf("%lf %lf %lf",&x, &y, &c)!=EOF)
        {
            dl lo = 0.0, hi = max(x,y), mid, tmp;
           while(hi - lo >EPS)
            {
               mid = lo+(hi-lo)/2.0;
               tmp = rang(mid);
               if(tmp>c)lo = mid;
               else hi = mid;
            }
            printf("%.3lf\n",mid);
        }

   #ifdef anikakash
      fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
   #endif

    return 0;
}

