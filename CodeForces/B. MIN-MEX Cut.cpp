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
#define gobug                   0
#define debugNS(a,b,c)          cout<<a<<b<<c<<endl;
#define debugN(b)               cout<<b<<endl;

int main(){
   
  #ifdef anikakash
       clock_t tStart = clock();
       freopen("INPUT.txt","r",stdin);
       freopen("output.txt","w",stdout); 
  #endif

  FASTERIO; //cmt when use scanf & printf ;
    
    int tt; cin>>tt;
    while(tt--){
        string s; cin>>s;
        int zero=0, one=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='0')zero = 1;
            else one = 1;
        }
        if(!zero)cout<<0<<endl;
        else if(!one)cout<<1<<endl;
        else{
            int st=-1, e=-1;
            for(int i=0; i<s.size(); i++){
                if(s[i]=='0'){
                    st=i; break;
                }
            }
            for(int i=s.size()-1; i>=0; i--){
                if(s[i]=='0'){
                    e=i; break;
                }
            }
            bool ok=true;
            for(int i=st; i<=e; i++){
                if(s[i]=='1'){
                    ok=false; break;
                }
            }
            if(ok)cout<<1<<endl;
            else cout<<2<<endl;
        }
    }

  #ifdef anikakash
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
  #endif

   return 0;
}