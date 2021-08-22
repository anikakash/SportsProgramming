#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                       cout<<'\n';
#define pi                       acos(-1.0) //3.1415926535897932384626
#define pb                       push_back
#define mk                       make_pair
#define mx                       1e2
#define EPS                      1e-10
#define dpoint(x)                fixed<<setprecision(x)
typedef long long int            ll;
typedef double                   dl;
typedef unsigned long long int   ull;

//Funtions
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}
int gcd(int a, int b){ int x ; return x = __gcd(a, b);}
int lcm(int a, int b){int y; return y = ((a)*((b)/gcd(a,b)));}

// Debugger
#define debugNS(a,b,c)             cout<<a<<b<<c;
#define debugN(b)               cout<<b<<endl;


int main(){
   
  #ifdef anikakash
       clock_t tStart = clock();
       freopen("INPUT.txt","r",stdin);
       freopen("output.txt","w",stdout); 
  #endif

  FASTERIO; //cmt when use scanf & printf ;
  
  int t;cin>>t;
  while(t--){
    ull n, s=0, pw=0, i=0, j=0, ans=INT_MAX;
    string s1, s2;

    cin>>n; 
    s2 = to_string(n);

        while(s<=1e18){
            s = pow(2,pw);
            pw++;
            s1 = to_string(s); int cnt=0;
            for(i=0, j=0; i<s2.size(); i++){
                if(s1[j] == s2[i]){
                    j++; cnt++;
                }
            }
            ull tmp = (s1.size()-cnt)+(s2.size()-cnt);
            ans = min(ans,tmp);
            cout<<s1<<" = "<<s1.size()<<" "<<cnt<<" "<<ans<<endl;
        }
        cout<<ans<<endl;
  }
    

  #ifdef anikakash
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
  #endif

   return 0;
}