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


int findmin(string s){
    int sm = INT_MAX;
    for(int i=0; i<s.size()-1; i++){
        sm = min(sm, abs((int)s[i] - (int)s[i+1]));
    }
    return sm;
}

int main(){
   
  #ifdef anikakash
       clock_t tStart = clock();
       freopen("INPUT.txt","r",stdin);
       freopen("output.txt","w",stdout); 
  #endif

  FASTERIO; //cmt when use scanf & printf ;
  
  
    string s="", s2="", ans="";
  while(getline(cin,s)){
  
         s2 = s;
        // cout <<s<<" "<<s2<<endl;
        int ln = INT_MIN, tmp=0;
        

        tmp = findmin(s);
        if(ln<tmp){
            ln = tmp;
            ans = s;
        }

        for(int i=1; i<11; i++)
        {
            if(prev_permutation(s.begin(), s.end()))
            {
                    tmp = findmin(s);
                    if(ln<tmp){
                        ln = tmp;
                        ans = s;
                    }
                    if(ln==tmp)ans=min(ans,s);
            }
        }

        for(int i=1; i<11; i++)
        {
            if(next_permutation(s2.begin(), s2.end()))
            {
                    tmp = findmin(s2);
                    if(ln<tmp){
                        ln = tmp;
                        ans = s2;
                    }
            }
        }
        cout<<ans<<ln<<endl;
  }
    

  #ifdef anikakash
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
  #endif

   return 0;
}