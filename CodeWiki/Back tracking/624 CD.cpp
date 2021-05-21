
#include<bits/stdc++.h>
using namespace    std;

#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define fasterio     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL           cout<<endl;
#define pi           acos(-1.0) //3.1415926535897932384626
#define mx           7500000
#define dpoint(x)    fixed<<setprecision(x)
#define mod          1000000007
#define pb           push_back
#define scn(x)       scanf("%d",&x)
#define scnd(x)      scanf("%lf",&x)
#define sc(x)        scanf("%s",&x)
#define debug(x)     cout<<x<<endl;

typedef long long int       ll;
typedef double              dl;
typedef unsigned long long  ul;

// --------------------------Pre made Functions & Proto Type--------------------------//
template <class T> T gcd(T a, T b){if(a == 0) return b;return gcd ( b%a, a );}
template <class T> T lcm(T a, T b){return ( ( a/gcd ( a, b ) )*b );}
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}

int m,n, v[21], total=0 ;
vector<int> temp, ans;
void solve(int pos, int sum)
{
  if(pos == n)
  {
      if(sum>total && sum<=m)
      {
          total = sum;
          ans = temp;
      }
      return;
  }
    temp.push_back(v[pos]);
    solve(pos+1, sum+v[pos]);
    temp.pop_back();
    solve(pos+1, sum);
}
int main()
{
    #ifdef EXTRA_8
        clock_t tStart = clock();
        freopen("input.txt","r",stdin);
        freopen("out.txt","w",stdout);
    #endif
       while(cin>>m)
       {
          cin>>n;
          total=0;
          for(int i=0; i<n; i++)cin>>v[i];

          solve(0,0);

          for(int i=0; i<ans.size(); i++)
          cout<<ans[i]<<" ";

          cout<<"sum:"<<total<<endl;
        
       }
    #ifdef EXTRA_8
        fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
    #endif
    return 0;
}