#include<bits/stdc++.h>
using namespace    std;

#define flush                   cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define fasterio                ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                      cout<<endl;
#define pi                      acos(-1.0) //3.1415926535897932384626
#define dpoint(x)               fixed<<setprecision(x)
#define debug1(a)                cout<<" "<<a<<" = ";
#define debug2(b)                cout<<b<<endl;
#define pb                      push_back
#define mx                      10000007
#define EPS                     1e-10
typedef long long int           ll;
typedef double                  dl;
typedef unsigned long long      ul;

// --------------------------Pre made Functions & Proto Type--------------------------//
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}
int gcd(int a, int b){ int x ; return x = __gcd(a, b);}
int lcm(int a, int b){int y; return y = ((a)*((b)/gcd(a,b)));}

//----------------------------Global Variable----------------------------------------//

int n,m;
vector<int>arr;
//-----------------------------------Functions--------------------------------------//

bool check(int maxsize)
{
   int sum = 0, cnt=0;
   for(int i=0; i<n; i++)
   {
      if(arr[i]>maxsize)return false;
      if(arr[i] + sum>maxsize) sum=0;
      if(sum==0)cnt++;
      sum+=arr[i];
      if(cnt>m)return false;
   }
   return true;
}

//------------------------------------MAIN FUNCTION-------------------------------//
int main()
{
   #ifdef anikakash
        clock_t tStart = clock();
        freopen("in.txt","r",stdin);
        freopen("ot.txt","w",stdout);
   #endif

   while(cin>>n>>m)
   {
       int total=0;
      for(int i=0; i<n; i++)
      {
         int x;
         cin>>x;
         arr.pb(x);
         total+=x;
      }
   //   debug1("total");
     // debug2(total);
      int lo = 1, hi = total, mid, ans=0;
      while(lo<=hi)
      {
         mid = lo+(hi-lo)/2;
       //  debug1("MID");
        // debug2(mid);
        // debug1("Checker");
        // debug2(check(mid));
         if(check(mid)){ans = mid;hi=mid-1;}
         else lo = mid+1;
      }
     // debug1("Answer is");
      cout<<ans<<endl;
      arr.clear();
   }
   #ifdef anikakash
      fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
   #endif

    return 0;
}

