#include<bits/stdc++.h>
using namespace    std;

#define flush                   cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                      cout<<'\n';
#define pi                      acos(-1.0) //3.1415926535897932384626
#define pb                      push_back
#define mk                      make_pair
#define mx                      1e18
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
#define debugNS(a,b,c)             cout<<a<<b<<c<<endl;
#define debugN(b)               cout<<b<<endl;


ll findTrailingZeros(ll n)
{
    ll count = 0;
    for (ll i = 5; n / i >= 1; i *= 5)
        count += n / i;
    return count;
}

int main(){
   
  #ifdef anikakash
       clock_t tStart = clock();
       freopen("INPUT.txt","r",stdin);
       freopen("output.txt","w",stdout); 
  #endif

   FASTERIO; //cmt when use scanf & printf ;

  int test; cin>>test;
  for(int caseno=1; caseno<=test; caseno++){

        ll query; cin>>query;
        ll low = 1, high = mx, ans=-1;

        while(low<=high){
            ll mid = (low+high)/2;
            ll zero_count =  findTrailingZeros(mid);
            if(query < zero_count) high = mid-1;
            else if(query > zero_count) low = mid+1;
            else {
                ans = mid;
                high = mid-1;
            }
        }
        if(ans==-1)cout<<"Case "<<caseno<<": impossible"<<endl;
        else cout<<"Case "<<caseno<<": "<<ans<<endl;
  }

  #ifdef anikakash
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
  #endif

   return 0;
}