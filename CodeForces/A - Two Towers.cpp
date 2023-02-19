#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                       cout<<'\n';
#define pi                       acos(-1.0) //3.1415926535897932384626
#define pb                       push_back
#define mk                       make_pair
#define MaxN                     1000000007 //1e5
#define EPS                      1e-18
#define dpoint(x)                fixed<<setprecision(x)
#define Fill(ar, weight)         memset(ar, weight, sizeof(ar))
typedef long long int            ll;
typedef double                   dl;
typedef unsigned long long int   ull;



bool chk(string s, string ss){
   for(int i=1; i<s.size(); i++){
      if(s[i]==s[i-1])return false;
   }
   for(int i=1; i<ss.size(); i++){
      if(ss[i]==ss[i-1])return false;
   }
   return true;
}


void solve(){
   int a, b; cin>>a>>b;
   string s, ss; cin>>s>>ss;
   string s1=s, s2=ss;
   bool ans = false;
   ans = chk(s, ss);
   if(ans==true){
      cout<<"YES\n";
      return;
   }
   
   for(int i=1; i<ss.size(); i++){
         s1+=s2[s2.size()-1];
         s2.pop_back();
         ans = chk(s1,s2);
         if(ans==true){
         cout<<"YES\n";
         return;
      }
   }
   s1=s, s2=ss;
   for(int i=1; i<s.size(); i++){
         s2+=s1[s1.size()-1];
         s1.pop_back();
         ans = chk(s1,s2);
         if(ans==true){
         cout<<"YES\n";
         return;
      }
   }

   cout<<"NO\n";
}

int main() {
#ifdef INSANE
   clock_t tStart = clock();
   freopen("int.txt", "r", stdin);
   freopen("out.txt", "w", stdout);
#endif
  
    FASTERIO; // comment when use scanf and printf 
   
   int tt, caseno=1; 
   cin>>tt;
   while(tt--){
      solve();
   }
    
#ifdef INSANE
   fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}

