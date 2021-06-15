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
#define EPS                     1e-10
typedef long long int           ll;
typedef double                  dl;
typedef unsigned long long      ul;

// --------------------------Pre made Functions & Proto Type--------------------------//
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}
int gcd(int a, int b){ int x ; return x = __gcd(a, b);}
int lcm(int a, int b){int y; return y = ((a)*((b)/gcd(a,b)));}


vector<int>arr; //declear the vector globally for easy access;
ll upperBound(ll key)
{
   ll l=0, r = arr.size()-1, ans=arr.size();  
   while(l<=r)
   {
      ll mid = l+(r-l)/2;
      if(arr[mid]>key)
      {
         ans = mid;
         r = mid-1;
      }
      else l = mid+1;
   }
   return ans;
}
/*
   return the next index of key 
   OR, if it is not in array then retrun -1 or size;
*/
ll lowerBound(ll key)
{
   ll l=0, r = arr.size()-1, ans=arr.size();
   while(l<=r)
   {
      ll mid = l+(r-l)/2;
      if(arr[mid]>=key)
      {
         ans = mid;
         r = mid-1;
      }
      else l = mid+1;
   }
   return ans;
}
int main()
{
   #ifdef anikakash
        clock_t tStart = clock();
        freopen("in.txt","r",stdin);
        freopen("ot.txt","w",stdout);
   #endif
        
  int n;
  cin>>n;
  for(int i=0; i<n; i++)
  {
      int x;
      cin>>x;
      arr.pb(x);
  }
  sort(arr.begin(), arr.end());
  int key;
  cin>>key;
  int lo = lowerBound(key);
  int up = upperBound(key);

  cout<<lo<<" "<<up<<endl;
  for(int i=0; i<n; i++)
  {
      cout<<arr[i]<<" ";
  }

   #ifdef anikakash
      fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
   #endif

    return 0;
}