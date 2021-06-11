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


int main()
{
   #ifdef anikakash
        clock_t tStart = clock();
        freopen("input.txt","r",stdin);
        freopen("ot.txt","w",stdout);
   #endif
        
    int t;
    cin>>t;
    while(t--)
    {
      ll n, c;
      scanf("%lld %lld",&n,&c);
      vector<ll>arr;
      for(ll i=0; i<n; i++)
      {
         ll x;
         scanf("%lld",&x);
         arr.pb(x);
      }
      sort(arr.begin(), arr.end());
      //ll mid = arr[0]+(arr[arr.size()-1]-arr[0])/2;
      //cout<<mid<<endl;
      ll low = arr[0], high = arr[arr.size()-1], ans=0;

      while(low<=high)
      {
            ll mid = low+(high-low)/2;
            ll cnt=1, left=0;
            for(ll i=1; i<n;i++)
            {
               if(arr[i]-arr[left]>=mid)
               {
                  cnt++; 
                  left = i;
               }
            }
            if(cnt>=c)
            {
               ans = mid;
               low = mid+1;
            }
            else high = mid-1;
      }
      cout<<ans<<endl;
      
    }
   #ifdef anikakash
      fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
   #endif
    return 0;
}

/*
      1 2 4 8 9
  5-> 1     1   -> cow can sit only 2 and  one is can't

for there is no solutations so check less then 5;

  now do half the mid -> 5/2 = 2;

    1 2 4 8 9
2-> 1   1 1   -> This one is valid;

now check if there is any bette solutation more then 2 and less then 5?

   ans : 
   5 2
   0 1
may help : https://www.youtube.com/watch?v=SiE1XFhYoaA

*/