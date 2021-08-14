#include<bits/stdc++.h>
using namespace    std;

#define flush                   cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                      cout<<'\n';
#define pi                      acos(-1.0) //3.1415926535897932384626
#define pb                      push_back
#define mx                      10000007
#define AC                      int
#define EPS                     1e-10
#define dpoint(x)               fixed<<setprecision(x)
typedef long long int           ll;
typedef double                  dl;
typedef unsigned long long      ul;

//Funtions
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}
int gcd(int a, int b){ int x ; return x = __gcd(a, b);}
int lcm(int a, int b){int y; return y = ((a)*((b)/gcd(a,b)));}

// Debugger
#define debugNS(a,b)             cout<<a<<" = "<<b<<endl;
#define debugN(b)               cout<<b<<endl;

set<ll>s;

void lucky_Number(ll n){
     if(n>1e10)return;
     s.insert(n);
     lucky_Number(n*10+4);
     lucky_Number(n*10+7);
}

// ll lowerBound(ll key)
// {
//    ll l=0, r = arr.size()-1, ans=arr.size();
//    while(l<=r)
//    {
//       ll mid = l+(r-l)/2;
//       if(arr[mid]>=key)
//       {
//          ans = mid;
//          r = mid-1;
//       }
//       else l = mid+1;
//    }
//    return ans;
// }

int main(){
   
  #ifdef anikakash
       clock_t tStart = clock();
       freopen("INPUT.txt","r",stdin);
       freopen("output.txt","w",stdout); 
  #endif

       FASTERIO;
       
       lucky_Number(4); lucky_Number(7);
      
      vector<ll>v;
      for(auto it:s){

          int seven_cnt=0, four_cnt=0;
          ll num = it;

          while(it){
               int rem = it%10;
               if(rem==4)four_cnt++;
               else seven_cnt++;
               it/=10;
          }
          if(seven_cnt == four_cnt)v.pb(num);
      }

      ll n; cin>>n;

      cout<<*lower_bound(v.begin(), v.end(),n)<<endl;

  #ifdef anikakash
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
  #endif

   return 0;
}