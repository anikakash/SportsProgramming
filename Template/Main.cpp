#include<bits/stdc++.h>
using namespace    std;

#define flush                   cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define fasterio                ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                      cout<<endl;
#define pi                      acos(-1.0) //3.1415926535897932384626
#define pb                      push_back
#define mx                      10000007
#define EPS                     1e-10
#define dpoint(x)               fixed<<setprecision(x)
#define debug1(a)               cout<<" "<<a<<" = ";
#define debug2(b)               cout<<b<<endl;
typedef long long int           ll;
typedef double                  dl;
typedef unsigned long long      ul;

// -----------------------Pre made Functions & Proto Type------------------------//
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}
int gcd(int a, int b){ int x ; return x = __gcd(a, b);}
int lcm(int a, int b){int y; return y = ((a)*((b)/gcd(a,b)));}
//------------------------------GlobalVariable----------------------------------//
//---------------------------------Functions------------------------------------//
//-------------------------------MAIN FUNCTION---------------------------------//
int main(){
   #ifdef anikakash
        clock_t tStart = clock();
        freopen("in.txt","r",stdin);
        freopen("test.txt","w",stdout);
   #endif
        int n, s;
        cin>>n>>s;
        int lo=1, hi = n, mid=0, tmp=0; 

        while(lo<=hi){
            mid = lo+(hi-lo)/2;
            int ans = digitsum(mid);
            if(ans<s)lo = mid;
            else if(ans>=s){
               tmp = ans;
               hi = mid;
            }
        }
        cout<<tmp<<endl;

   #ifdef anikakash
      fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
   #endif

    return 0;
}

